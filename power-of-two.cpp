// File Name: power-of-two.cpp
// Author:
// Mail:
// Created Time: 2016年11月29日 星期二 03时39分50秒
#include <iostream>
class Solution {
 public:
  bool isPowerOfTwo(int n) { return n > 0 && (!(n & n - 1)); }
};
