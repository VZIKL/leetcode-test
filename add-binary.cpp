// File Name: add-binary.cpp
// Author:
// Mail:
// Created Time: 2016年12月06日 星期二 01时20分41秒
#include <string.h>
#include <iostream>
class Solution {
 public:
  std::string addBinary(std::string a, std::string b) {
    std::string result = "";
    int a_len = a.length() - 1;
    int b_len = b.length() - 1;
    int tmp = 0;
    while (a_len >= 0 || b_len >= 0 || tmp == 1) {
      tmp += a_len >= 0 ? a[a_len--] - '0' : 0;
      tmp += b_len >= 0 ? b[b_len--] - '0' : 0;
      result = char(tmp % 2 + '0') + result;
      tmp /= 2;
    }
    return result;
  }
};
