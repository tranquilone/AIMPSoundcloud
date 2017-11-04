#include "stdafx.h"
#include "Headers.h"

static std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> wStrConverter;

AimpString::AimpString() {
  _obj = AimpCore::Instance().CreateString();
}

AimpString::AimpString(const std::wstring &string) {
  _obj = AimpCore::Instance().CreateString();

  if (_obj)
  {
    _obj->SetData(const_cast<wchar_t *>(string.data()), string.size());
  }
}

AimpString::AimpString(const wchar_t *string) {
  _obj = AimpCore::Instance().CreateString();

  if (_obj)
  {
    _obj->SetData(const_cast<wchar_t *>(string), wcslen(string));
  }
}

AimpString::AimpString(const rapidjson::Value &val) {
  _obj = AimpCore::Instance().CreateString();
  if (_obj) {
    if (val.IsString() && val.GetStringLength() > 0) {
      const char *ptr = val.GetString();
      std::wstring str = wStrConverter.from_bytes(ptr, ptr + val.GetStringLength());
      _obj->SetData(const_cast<wchar_t *>(str.data()), str.size());
    }
    else {
      _obj.reset();
    }
  }
}