// File Name: number-of-1-bits.cpp
// Author:
// Mail:
// Created Time: 2017年01月06日 星期五 17时49分46秒
#include <iostream>
class Solution {
 public:
  int hammingWeight(uint32_t n) {
    int result = 0;
    while (n) {
      if (n & -n) result++;
      n = n & (n - 1);
    }
    return result;
  }
};
