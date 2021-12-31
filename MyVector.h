#pragma once

template <class T>
class MyVector{
public:
  MyVector();
  int size() const;
  int capacity() const;
  bool empty() const;
  void push_back(T n);
  void pop_back(T n);
  void pop_back();
  void clear();
  T &operator[](int n);
private:
  int myvector_size;
  int myvector_cap;
  T * data;
};

#include "MyVector.cxx"
