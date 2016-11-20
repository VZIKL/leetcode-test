// File Name: majority-element.cpp
// Author:
// Mail:
// Created Time: 2016年11月21日 星期一 00时13分05秒
//
#include <iostream>
#include <vector>
class Solution {
 public:
  int majorityElement(std::vector<int>& nums) {
    int result = 0;
    int x = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (x == 0) {
        result = nums[i];
        x++;

      } else {
        if (result == nums[i]) {
          x++;

        } else {
          x--;
        }
      }
    }
    return result;
  }
};
