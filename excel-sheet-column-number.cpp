// File Name: excel-sheet-column-number.cpp
// Author:
// Mail:
// Created Time: 2016年11月18日 星期五 08时09分41秒
#include <string.h>
#include <iostream>
class Solution {
 public:
  int titleToNumber(std::string s;) {
    int result;
    int len = s.size();
    for (int i = 0; i < len; i++) {
      result = result * 26 + s[i] - 'A' + 1;
    }
    return result;
  }
};
