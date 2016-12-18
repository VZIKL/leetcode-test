// File Name: excel-sheet-column-title.cpp
// Author:
// Mail:
// Created Time: 2016年12月19日 星期一 02时10分07秒
#include <iostream>
#include <string>
class Solution {
 public:
  std::string covertToTitle(int n) {
    std::string result;
    while (n) {
      result = char((n - 1) % 26 + 'A') + result;
      n = (n - 1) / 26;
    }
    return result;
  }
};
