// File Name: length-of-last-world.cpp
// Author:
// Mail:
// Created Time: 2016年12月15日 星期四 00时03分51秒
#include <string.h>
#include <iostream>
class Solution {
 public:
  int lengthOfLastWorld(std::string s) {
    int result = 0, len = s.length();
    while (s[len - 1] == ' ') len--;
    for (int i = len - 1; i >= 0; ++i) {
      if (s[i] != ' ')
        result++;
      else
        break;
    }
    return result;
  }
};
