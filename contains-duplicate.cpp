// File Name: contains-duplicate.cpp
// Author:
// Mail:
// Created Time: 2016年11月22日 星期二 07时12分19秒
#include <iostream>
#include <set>
#include <vector>
class Solution {
 public:
  bool containsDuplicate(std::vector<int>& nums) {
    std::set<int> s1(nums.begin(), nums.end());
    return s1.size() != nums.size();
  }
};
