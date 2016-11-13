// File Name: Find-the-Difference.cpp
// Author:
// Mail:
// Created Time: 2016年11月14日 星期一 07时36分18秒
#include <string.h>
#include <iostream>
using namespace std;
class Solution {
 public:
  char findTheDifference(string s, string t) {
    int s_num = 0, t_num = 0;
    for (int i = 0; i < s.size(); i++) {
      s_num = s[i] + s_num;
    }
    for (int i = 0; i < t.size(); i++) {
      t_num = t[i] + t_num;
    }
    return char(abs(s_num - t_num));
  }
};
