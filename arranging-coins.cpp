// File Name: arranging-coins.cpp
// Author:
// Mail:
// Created Time: 2017年01月04日 星期三 15时20分24秒
#include <iostream>
class Solution {
 public:
  int arrangeCoins(int n) {
    int i = 0;
    while (n >= 0) {
      i++;
      n -= i;
    }
    return i - 1;
  }
};
