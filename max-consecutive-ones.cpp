
// File Name: max-consecutive-ones.cpp
// Author:
// Mail:
// Created Time: 2017年1月15日 星期日 22时39分02秒
#include <iostream>
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = 0,tmp = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                tmp=0;
            }else{
                tmp++;
                if(tmp>result){
                    result = tmp;
                }
            }
        }
        return result;
    }
}
