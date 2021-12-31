#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "MyVector.h"

TEST_CASE("Testing constructor"){
  MyVector<int>integers;
  CHECK(integers.size() == 0);
  CHECK(integers.capacity() == 10);
  MyVector<std::string> strings;
  CHECK(integers.size() == 0);
  CHECK(integers.capacity() == 10);
}


TEST_CASE("Testing push_back and operator[]"){
  //Testing with a MyVector of ints
  MyVector<int> integers;
  for (int i = 0 ; i < 10; i++){
    integers.push_back(i);
    CHECK(integers[i] == i);
    CHECK(integers.size() == i+1);
    CHECK(integers.capacity() == 10);
  }
  CHECK(integers.capacity() == 10);
  integers.push_back(11);
  CHECK(integers.size() == 11);
  CHECK(integers[10] == 11);
  //capacity doubles when size is larger than the current capacity
  CHECK(integers.capacity() == 20);

  //Testing with a MyVector of strings
  MyVector <std::string> strings;
  for (int i = 0; i < 10; i++){
    strings.push_back(std::to_string(i));
    CHECK(strings[i] == std::to_string(i));
    CHECK(strings.size() == i+1);
    CHECK(strings.capacity() == 10);
  }
  CHECK(strings.capacity() == 10);
  strings.push_back("11");
  CHECK(strings.size() == 11);
  CHECK(strings[10] == "11");
  //capacity doubles when size is larger than the current capacity
  CHECK(strings.capacity() == 20);
}
