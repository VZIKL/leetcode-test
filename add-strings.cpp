// File Name: add-strings.cpp
// Author:
// Mail:
// Created Time: 2016年12月21日 星期三 03时39分29秒
#include <string.h>
#include <iostream>
class Solution {
 public:
  std::string addStrings(std::string num1, std::string num2) {
    std::string result = "";
    int num1_len = num1.length() - 1;
    int num2_len = num2.length() - 1;
    int tmp = 0;
    while (num1_len >= 0 || num2_len >= 0) {
      int a = num1_len >= 0 ? num1[num1_len--] - '0' : 0;
      int b = num2_len >= 0 ? num2[num2_len--] - '0' : 0;
      int sum = a + b + tmp;
      result.insert(result.begin(), sum % 10 + '0');
      tmp = sum / 10;
    }
    return tmp == 1 ? "1" + result : result;
  }
};
