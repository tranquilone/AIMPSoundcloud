#pragma once

class AimpCore : public AimpObject<IAIMPCore>
{
public:
  static AimpCore& Instance() {
    static AimpCore instance;
    return instance;
  }

  AimpCore(AimpCore const&) = delete;             
  AimpCore(AimpCore&&) = delete;                  
  AimpCore& operator=(AimpCore const&) = delete;  
  AimpCore& operator=(AimpCore &&) = delete;     

public:
  void Init(IAIMPCore* core) { _core = core; }
  std::shared_ptr<IAIMPString> CreateString();

protected:
  AimpCore(){}

private:
  IAIMPCore *_core;
};

