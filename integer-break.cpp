// File Name: integer-break.cpp
// Author:
// Mail:
// Created Time: 2017年1月18日 星期三 14时19分14秒
#include <iostream>
class Solution {
public:
    int integerBreak(int n) {
      if(n==2||n==3)return n-1;
      int result = 1;
      while(n>4){
        result *=3;
        n -=3;
      }
      return result * n;
    }
};
