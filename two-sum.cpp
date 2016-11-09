// File Name: two-sum.cpp
// Author:
// Mail:
// Created Time: 2016年11月09日 星期三 12时16分25秒
#include <iostream>
#include <map>
#include <vector>
class Solution {
 public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int len = nums.size();
    for (int x = 0; x < len; x++) {
      for (int y = x + 1; y < len; y++) {
        if (target == (nums[x] + nums[y])) {
          return std::vector<int>{x, y};
        }
      }
    }
    return std::vector<int>();
  }
}
