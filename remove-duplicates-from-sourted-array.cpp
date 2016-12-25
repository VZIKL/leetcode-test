// File Name: remove-duplicates-from-sourted-array.cpp
// Author:
// Mail:
// Created Time: 2016年12月25日 星期日 17时57分11秒
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
class Solution {
 public:
  int removeDuplicates(std::vector<int>& nums) {
    if (nums.size() == 0) return 0;
    std::set<int> tmp(nums.begin(), nums.emd());
    std::vector<int> result(tmp.begin(), tmp.end());
    nums = result;
    int length = result.size();
    return length;
  }
}
