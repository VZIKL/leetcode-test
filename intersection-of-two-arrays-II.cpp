// File Name: intersection-of-two-arrays-II.cpp
// Author:
// Mail:
// Created Time: 2016年11月26日 星期六 18时18分56秒
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
class Solution {
 public:
  std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::multiset<int> n1(nums1.begin(), nums1.end()),
        n2(nums2.begin(), nums2.end()), result;
    std::set_intersection(n1.begin(), n1.end(), n2.begin(), n2.end(),
                          std::inserter(result, result.begin()));
    return std::vector<int>(result.begin(), result.end());
  }
};
