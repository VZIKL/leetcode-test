// File Name: container-with-most-water.cpp
// Author:
// Mail:
// Created Time: 2016年11月24日 星期四 04时04分23秒
#include <iostream>
#include <vector>
class Solution {
 public:
  int maxArea(std::vector<int>& height) {
    int len = height.size();
    int area = 0, i = 0, j = len - 1;
    while (i < j) {
      int tmp = (j - i) * (height[j] > height[i] ? height[i] : height[j]);
      if (height[j] > height[i]) {
        i++;
      } else {
        j--;
      }
      if (area < tmp) {
        area = tmp;
      }
    }
    return area;
  }
};
