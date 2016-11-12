// File Name: fizz-buzz.cpp
// Author:
// Mail:
// Created Time: 2016年11月12日 星期六 15时03分09秒
#include <string.h>
#include <iostream>
#include <vector>
class Solution {
 public:
  std::vector<std::string> fizzBuzz(int n) {
    std::vector<std::string> x;
    std::string tmp;
    for (int i = 1; i <= n; i++) {
      tmp = std::to_string(i);
      if (i % 3 == 0 && i % 5 != 0) {
        x.push_back("Fizz");
      } else if (i % 5 == 0 && i % 3 != 0) {
        x.push_back("Buzz");
      } else if (i % 5 == 0 && i % 3 == 0) {
        x.push_back("FizzBuzz");
      } else {
        x.push_back(tmp);
      }
    }
    return x;
  }
};
