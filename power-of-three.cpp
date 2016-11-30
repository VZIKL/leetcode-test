// File Name: power-of-three.cpp
// Author:
// Mail:
// Created Time: 2016年12月01日 星期四 06时59分38秒
#include <iostream>
class Solution {
 public:
  bool isPowerOfThree(int n) {
    while (n && n % 3 == 0) {
      n /= 3;
    }
    return n == 1;
  }
};
