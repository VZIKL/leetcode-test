// File Name: single-number.cpp
// Author:
// Mail:
// Created Time: 2016年11月15日 星期二 19时44分25秒
#include <algorithm>
#include <iostream>
#include <vector>
class Solution {
 public:
  int singleNumber(std::vector<int>& nums) {
    int result = 0;
    for (std::vector<int>::iterator p = nums.begin(); p != nums.end(); p++) {
      result = result ^ *p;
    }
    return result;
  }
};
