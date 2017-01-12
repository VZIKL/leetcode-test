// File Name: find-all-number-disappeared-in-array.cpp
// Author:
// Mail:
// Created Time: 2017年01月09日 星期四 23时43分56秒
#include <iostream>
#include <vector>
class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
         int len = nums.size();
         std:vector<int> result;
         for(int i = 0;i<len;i++){
             int tmp = abs(nums[i])-1;
             nums[tmp] = nums[tmp]>0?-nums[tmp]:nums[tmp];
         }
         for(int i = 0;i<len;i++){
             if(nums[i]>0){
                 result.push_back(i+1);
             }
         }
         return result;
    }
};
