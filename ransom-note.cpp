// File Name: ransom-note.cpp
// Author:
// Mail:
// Created Time: 2016年11月16日 星期三 01时54分16秒
#include <string.h>
#include <iostream>
#include <vector>
class Solution {
 public:
  bool canConstruct(std::string ransomNote, std::string magazine) {
    std::vector<int> x(26, 0);
    for (char i : magazine) {
      x[i - 'a']++;
    }
    for (char j : ransomNote) {
      if (--x[j - 'a'] < 0) {
        return false;
      }
    }
    return true;
  }
};
