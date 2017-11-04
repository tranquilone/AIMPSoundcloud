#pragma once

class AimpPluginImpl : IAIMPPlugin {

  PWCHAR WINAPI InfoGet(int Index) override {

  }
  virtual DWORD WINAPI InfoGetCategories() override {

  }
  // Initialization / Finalization
  virtual HRESULT WINAPI Initialize(IAIMPCore* Core) override {

  }
  virtual HRESULT WINAPI Finalize() override {

  }
  // System Notifications
  virtual void WINAPI SystemNotification(int NotifyID, IUnknown* Data)  override {

  }
};

class AimpPlugin

};

