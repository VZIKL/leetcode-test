// File Name: number-complement.cpp
// Author:
// Mail:
// Created Time: 2017年1月19日 星期四 21时29分14秒
#include <iostream>
class Solution {
public:
    int findComplement(int num) {
      int tmp = num , x = 1;
      while(tmp>0){
      x<<=1;
      tmp>>=1;
      }
      return num^(x-1);
    }
};
