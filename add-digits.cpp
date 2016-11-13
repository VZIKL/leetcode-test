// File Name: add-digits.cpp
// Author:
// Mail:
// Created Time: 2016年11月13日 星期日 18时06分00秒
#include <iostream>
class Solution {
 public:
  int addDigits(int num) {
    while (num >= 10) {
      num = num % 10 + (num - num % 10) / 10;
    }
    return num;
  }
};
