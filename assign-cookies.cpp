// File Name: assign-cookies.cpp
// Author:
// Mail:
// Created Time: 2016年11月20日 星期日 13时53分53秒
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
class Solution {
 public:
  int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
    int result = 0;
    std::multiset<int> s1(g.begin(), g.end()), s2(s.begin(), s.end());
    if (g.empty() || s.empty()) {
      return result;
    }
    std::multiset<int>::iterator t1 = s1.begin(), t2 = s2.begin();
    while (t1 != s1.end() && t2 != s2.end()) {
      if (*t1 <= *t2) {
        t1++;
        t2++;
        result++;
      } else {
        t2++;
      }
    }
    return result;
  }
};
