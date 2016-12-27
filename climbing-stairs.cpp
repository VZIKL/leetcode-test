// File Name: climbing-stairs.cpp
// Author:
// Mail:
// Created Time: 2016年12月27日 星期二 23时27分37秒
#include <iostream>

class Solution {
 public:
  int climbStairs(int n) {
    if (n <= 2) return n;
    int i = 1, a = 0, b = 1, c = 0;
    while (i <= n) {
      c = a + b;
      a = b;
      b = c;
      i++;
    }
    return c;
  }
};
