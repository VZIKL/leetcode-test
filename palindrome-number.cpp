// File Name: palindrome-number.cpp
// Author:
// Mail:
// Created Time: 2017年01月08日 星期日 20时07分50秒
#include <iostream>
class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) return false;
    int len = 1;
    while (x / len >= 10) len *= 10;
    while (x != 0) {
      int right = x % 10;
      int left = x / len;
      if (right != left) return false;
      x = (x % len) / 10;
      len /= 100;
    }
    return true;
  }
};
