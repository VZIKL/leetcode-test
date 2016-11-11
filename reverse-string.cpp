// File Name: reverse-string.cpp
// Author:
// Mail:
// Created Time: 2016年11月11日 星期五 12时14分31秒
#include <string.h>
#include <algorithm>
#include <iostream>
class Solution {
 public:
  std::string reverseString(std::string s) {
    std::string x;
    x.assign(s.rbegin(),s.rend());
    return x;
  }
};
