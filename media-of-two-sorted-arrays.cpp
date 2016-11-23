//File Name: media-of-two-sorted-arrays.cpp
//Author: 
//Mail: 
//Created Time: 2016年11月23日 星期三 21时41分04秒
#include<iostream>
#include <vector>
#include <algorithm>
class Solution{
    public:
        double findMedianSortedArrays(std::vector<int>& nums1,std::vector<int>& nums2){
            std::vector<int> x(nums1.begin(),nums1.end());
            x.insert(x.end(),nums2.begin(),nums2.end());
            std::sort(x.begin(),x.end());
            return x.size()%2 ==0?(x[x.size() / 2] + x[x.size() / 2 -1]) / 2.0:x[x.size()/2];
        }
};
