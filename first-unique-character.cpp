// File Name: first-unique-character.cpp
// Author:
// Mail:
// Created Time: 2016年11月19日 星期六 14时22分43秒
#include <string.h>
#include <iostream>
class Solution {
 public:
  int firstUniqChar(std::string s) {
    int len = s.size();
    int q[128] = {0};
    for (int i = 0; i < len; i++) {
      q[s[i]]++;
    }
    for (int i = 0; i < len; i++) {
      if (q[s[i]] == 1) {
        return i;
      }
    }
    return -1;
  }
};
