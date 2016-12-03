// File Name: power-of-four.cpp
// Author:
// Mail:
// Created Time: 2016年12月03日 星期六 23时34分38秒
#include <iostream>
class Solution {
 public:
  bool isPowerOfFour(int num) {
    while (num && num % 4 == 0) {
      num /= 4;
    }
    return num == 1;
  }
};
