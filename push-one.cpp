// File Name: push-one.cpp
// Author:
// Mail:
// Created Time: 2016年12月17日 星期六 21时41分22秒
#include <iostream>
#include <vector>
class Solution {
 public:
  std::vector<int> plusOne(vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
      if (digits[i] != 9) {
        ++digits[i];
        return digits;
      } else {
        digits[i] = 0;
      }
    }
    digits[0] = 1;
    digits.push_back(0);
    return digits;
  }
};
