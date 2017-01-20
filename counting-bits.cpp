// File Name: counting-bits.cpp
// Author:
// Mail:
// Created Time: 2017年1月20日 星期五 21时03分14秒
#include <iostream>
#include <vector>
class Solution {
public:
    std::vector<int> countBits(int num) {
      std::vector<int> result (num+1,0);
      for(int i = 1;i<num;i++){
        result[i] = result[i/2]+(i%2);
      }
      return result;
    }
};
