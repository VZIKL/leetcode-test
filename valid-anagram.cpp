// File Name: valid-anagram.cpp
// Author:
// Mail:
// Created Time: 2016年11月20日 星期日 20时23分09秒
#include <string.h>
#include <algorithm>
#include <iostream>
class Solution {
 public:
  bool isAnagram(std::string s, std::string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    return s == t;
  }
};
