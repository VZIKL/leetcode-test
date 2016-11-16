//File Name: intersection-of-two-arrays.cpp
//Author: 
//Mail: 
//Created Time: 2016年11月16日 星期三 04时18分22秒
#include<iostream>
#include <vector>
#include <set>
#include <algorithm>
class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::set<int> n1(nums1.begin(),nums1.end()),n2(nums2.begin(),nums2.end()),result;
        set_intersection(n1.begin(),n1.end(),n2.begin(),n2.end(),inserter(result,result.begin()));
         return std::vector<int> (result.begin(),result.end());
    }
};

