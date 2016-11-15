// File Name: move-zeroes.cpp
// Author:
// Mail:
// Created Time: 2016年11月15日 星期二 12时22分39秒
#include <iostream>
#include <vector>
class Solution {
 public:
  void moveZeroes(std::vector<int>& nums) {
    std::vector<int>::iterator x;
    std::vector<int> y;
    int zero_num = 0;
    for (x = nums.begin(); x != nums.end(); x++) {
      if (*x != 0) {
        y.push_back(*x);
      }
      if (*x == 0) {
        zero_num++;
      }
    }
    for (int i = 0; i < zero_num; i++) {
      y.push_back(0);
    }
    nums = y;
  }
};
