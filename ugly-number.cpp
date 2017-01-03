// File Name: ugly-number.cpp
// Author:
// Mail:
// Created Time: 2017年01月03日 星期二 20时58分02秒
#include <iostream>
class Solution {
 public:
  bool isUgly(int num) {
    if (num <= 0) return false;
    while (num % 2 == 0) num /= 2;
    while (num % 3 == 0) num /= 3;
    while (num % 5 == 0) num /= 5;
    if (num == 1) {
      return true;
    }
    return false;
  }
};
