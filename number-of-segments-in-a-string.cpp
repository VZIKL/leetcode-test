// File Name: number-of-segments-in-a-sring.cpp
// Author:
// Mail:
// Created Time: 2016年12月26日 星期一 23时28分49秒
#include <iostream>
#include <string>
class Solution {
 public:
  int countSegments(std::string s) {
    if (s == "") return 0;
    int result = 0;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] != ' ' && (i == 0 || s[i] == ' ')) {
        result++;
      }
    }
    return result;
  }
};
