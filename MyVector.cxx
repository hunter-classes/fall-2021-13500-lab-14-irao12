#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector(){
  myvector_size = 0;
  myvector_cap = 10;
  data = new T[10];
}

template <class T>
int MyVector<T>::size(){
  return myvector_size;
}

template <class T>
int MyVector<T>::capacity(){
  return myvector_cap;
}

template <class T>
bool MyVector<T>::empty() const{
  return (myvector_size == 0);
}

template <class T>
void MyVector<T>::push_back(T n){
  //checks if capacity needs to increase
  if (myvector_size == myvector_cap){
    //capacity doubles if necessary
    myvector_cap *= 2;
    T * new_data = new T[myvector_cap];
    //copies over the old data into larger array
    for (int i = 0; i < myvector_size; i++){
      new_data[i] = data[i];
    }
    data = new_data;
  }
  //adds n to the MyVector
  data[myvector_size] = n;
  myvector_size++;
}

template <class T>
T& MyVector<T>::operator[](int n){
  return data[n];
}

template <class T>
void MyVector<T>::pop_back(){
  //sets the newest element to 0 and decrements the size;
  if (myvector_size != 0)
    myvector_size--;
}

template <class T>
void MyVector<T>::pop_back(T n){
  int size = myvector_size;
  for (int i = n; i < size-1; i++){
    data[i] = data[i+1];
  }
  myvector_size--;
}
