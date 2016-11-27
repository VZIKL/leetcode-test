// File Name: island-perimeter.cpp
// Author:
// Mail:
// Created Time: 2016年11月28日 星期一 02时33分15秒
#include <iostream>
#include <vector>
class Solution {
 public:
  int islandPerimeter(std::vector<std::vector<int>>& grid) {
    if (grid.size() == 0) return 0;
    int result = 0, tmp = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (!grid[i][j]) {
          continue;
        }
        result++;
        if (i && grid[i - 1][j] == 1) tmp++;
        if (j && grid[i][j - 1] == 1) tmp++;
      }
    }
    return result * 4 - tmp * 2;
  }
};
