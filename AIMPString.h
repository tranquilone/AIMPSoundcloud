#pragma once

class AIMPString {
public:
    AIMPString();
    AIMPString(const std::wstring &string);
    AIMPString(const wchar_t *string);
    AIMPString(const rapidjson::Value &val);

    operator IAIMPString* () { return _string.get(); }
    IAIMPString* operator ->() { return _string.get(); }

private:
    std::shared_ptr<IAIMPString> _string;
};
