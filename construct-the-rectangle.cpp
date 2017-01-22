// File Name: construct-the-rectangle.cpp
// Author:
// Mail:
// Created Time: 2017年1月22日 星期日 23时39分14秒
#include <iostream>
#include <vector>
class Solution {
public:
    std::vector<int> constructRectangle(int area) {
      std::vector<int>result(2,0);
      int l = sqrt(area),w=sqrt(area);
      while(l*w!=area){
        if(l*w<area){ 
          l++;
        }else{
        w++;
        }
      }
      result[0] = l;
      result[1] = w;
      return result;
    }
};
