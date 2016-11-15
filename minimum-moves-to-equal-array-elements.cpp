// File Name: minimum-moves-to-equal-array-elements.cpp
// Author:
// Mail:
// Created Time: 2016年11月16日 星期三 01时11分14秒
#include <algorithm>
#include <iostream>
#include <vector>
class Solution {
 public:
  int minMoves(std::vector<int>& nums) {
    int result = 0;
    std::sort(nums.begin(), nums.end());
    int tmp = nums[0];
    for (int i : nums) {
      result += i - tmp;
    }
    return result;
  }
};
