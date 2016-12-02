// File Name: happy-number.cpp
// Author:
// Mail:
// Created Time: 2016年12月02日 星期五 22时30分55秒
#include <iostream>
class Solution {
 public:
  bool isHappy(int n) {
    while (n != 1 && n != 4) {
      int s = 0;
      while (n) {
        s += (n % 10) * (n % 10);
        n = n / 10;
      }
      n = s;
    }
    return n == 1;
  }
}
