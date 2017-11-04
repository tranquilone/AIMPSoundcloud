#pragma once

class AimpString : public AimpObject<IAIMPString> {
public:
  AimpString();
  AimpString(const std::wstring &string);
  AimpString(const wchar_t *string);
  AimpString(const rapidjson::Value &val);

  operator IAIMPString* () { return _obj.get(); }
  IAIMPString* operator ->() { return _obj.get(); }
  IAIMPString* Native() { return _obj.get(); }
};