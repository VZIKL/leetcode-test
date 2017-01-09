// File Name: remove-element.cpp
// Author:
// Mail:
// Created Time: 2017年01月09日 星期一 12时34分56秒
#include <iostream>
#include <vector>
class Solution {
 public:
  int removeElement(std::vector<int>& nums, int val) {
    int result = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != val) {
        nums[result++] = nums[i];
      }
    }
    return result;
  }
}
