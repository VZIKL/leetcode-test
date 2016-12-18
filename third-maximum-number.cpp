// File Name: third-maximum-number.cpp
// Author:
// Mail:
// Created Time: 2016年12月18日 星期日 20时02分56秒
#include <iostream>
#include <set>
#include <vector>
class Solution {
 public:
  int thirdMax(std::vector<int>& nums) {
    std::set<int> x(nums.begin(), nums.end());
    std::vector<int> result(x.begin(), x.end());
    if (result.size() == 1) return result[0];
    if (result.size() == 2) return result[1];
    return result[result.size() - 3];
  }
};
