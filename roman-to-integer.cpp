// File Name: roman-to-integer.cpp
// Author:
// Mail:
// Created Time: 2017年01月07日 星期六 16时37分48秒
#include <iostream>
#include <map>
#include <string>
class Solution {
 public:
  int romanToInt(std::string s) {
    std::map<char, int> num;
    num['I'] = 1;
    num['V'] = 5;
    num['X'] = 10;
    num['L'] = 50;
    num['C'] = 100;
    num['D'] = 500;
    num['M'] = 1000;
    int result = num[s[s.length() - 1]];
    for (int i = s.length() - 2; i >= 0; i--) {
      if (num[s[i]] < num[s[i + 1]])
        result -= num[s[i]];
      else
        result += num[s[i]];
    }
    return result;
  }
};
