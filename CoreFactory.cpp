#include "stdafx.h"
#include "CoreFactory.h"

struct Releaser {
  void operator()(IUnknown* p) {
    if (p)
      p->Release();
  };
};


std::shared_ptr<IAIMPString> CoreFactory::CreateString()
{ 
  IAIMPString* string;
  if (SUCCEEDED(_core->CreateObject(IID_IAIMPString, reinterpret_cast<void **>(&string)))) {
    return std::shared_ptr<IAIMPString>(string, Releaser());
  }

  return {};
}
