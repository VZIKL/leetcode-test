// File Name: house-robber.cpp
// Author:
// Mail:
// Created Time: 2017年01月09日 星期五 23时17分56秒
#include <iostream>
#include <vector>
class Solution{
  public:
    int rob(std::vector<int> &nums){
      int a = 0,b = 0;
      for(int i = 0;i<nums.size();i++){
        int m = a,n = b;
        a = n + nums[i];
        b = max(m , n);
      }
      return (a ,b);
    }
};
