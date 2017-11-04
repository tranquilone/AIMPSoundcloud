#pragma once

template<class T>
class AimpObject
{
public:
  T* Native() { return _obj.get(); }

protected:
  std::shared_ptr<T> _obj;
};

