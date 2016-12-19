// File Name: hamming-distance.cpp
// Author:
// Mail:
// Created Time: 2016年12月20日 星期二 07时00分51秒
#include <iostream>
class Solution {
 public:
  int hammingDistance(int x, int y) {
    int z = x ^ y;
    int result = 0;
    for (int i = 0; i < 32; i++) {
      if ((z & 1) != 0) result++;
      z >>= 1;
    }
    return result;
  }
};
