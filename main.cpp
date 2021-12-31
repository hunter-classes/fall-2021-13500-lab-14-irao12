#include <iostream>
#include "MyVector.h"

int main(){
  MyVector<int> ints;
  ints.push_back(23);
  for (int i = 0 ; i < ints.size(); i++){
    std::cout << ints[i] << '\n';
  }
  return 0;
}
