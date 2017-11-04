#pragma once

class CoreFactory
{
public:
  static CoreFactory& Instance() {
    static CoreFactory instance;
    return instance;
  }

  CoreFactory(CoreFactory const&) = delete;             
  CoreFactory(CoreFactory&&) = delete;                  
  CoreFactory& operator=(CoreFactory const&) = delete;  
  CoreFactory& operator=(CoreFactory &&) = delete;     

public:
  void Init(IAIMPCore* core) { _core = core; }
  std::shared_ptr<IAIMPString> CreateString();

protected:
  CoreFactory(){}

private:
  IAIMPCore *_core;
};

