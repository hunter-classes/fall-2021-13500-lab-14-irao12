#include <iostream>
#include "MyVector.h"

int main(){
  MyVector<int> int_MyVector;

  std::cout << "initial MyVector int_MyVector:" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  for (int i = 0 ; i < 10; i++){
    int_MyVector.push_back(i);
  }

  std::cout << '\n';
  std::cout << "int_MyVector after adding 10 ints:" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  std::cout  << '\n';
  for (int i = 0 ; i < 5; i++){
    int_MyVector.push_back(10+i);
  }
  std::cout << "int_MyVector after adding 5 more ints:" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  int_MyVector.pop_back();
  std::cout << '\n';
  std::cout << "int_MyVector after pop_back() call" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  int_MyVector.pop_back(7);
  std::cout << '\n';
  std::cout << "int_MyVector after pop_back(7) call" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  std::cout << "\nTesting assignment:" << '\n';
  std::cout << "After int_MyVector[0] = 100:" << '\n';
  int_MyVector[3] = 100;
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout  << '\n';

  int_MyVector.clear();
  std::cout << '\n';
  std::cout << "int_MyVector after clear() call" << '\n';
  for (int i = 0 ; i < int_MyVector.size(); i++){
    std::cout << int_MyVector[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "size(): " << int_MyVector.size() << '\n';
  std::cout << "capacity(): " << int_MyVector.capacity() << '\n';
  std::cout << "empty(): " << std::boolalpha << int_MyVector.empty() << '\n';

  return 0;
}
