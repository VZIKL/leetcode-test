// File Name: reverse-integer.cpp
// Author:
// Mail:
// Created Time: 2016年11月23日 星期三 19时16分36秒
#include <iostream>
#include <math.h>
#include <stdlib.h>
class Solution {
 public:
  int reverse(int x) {
    long result = 0;
    int column;
    bool symbol = x > 0 ? true : false;
    x = std::abs(x);
    while (x > 0) {
      column = x % 10;
      result = result * 10 + column;
      x = x / 10;
    }
    if (result > INT_MAX || result < INT_MIN) {
      return 0;
    }
    return symbol ? result : -result;
  }
};
