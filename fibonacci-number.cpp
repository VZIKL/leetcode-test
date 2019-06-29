//File Name: fibonacci-number.cpp
//Author:
//Mail:
//Created Time: 六  6/29 11:07:00 2019
//
class Solution {
public:
    int fib(int N)
    {
        if (N == 0) {
            return 0;
        } else if (N == 1) {
            return 1;
        }
        int result = 0, i = 0, j = 1;
        for (int k = 0; k < N / 2; ++k) {
            i = i + j;
            j = i + j;
        }
        if (N % 2 == 0) {
            result = i;
        } else {
            result = j;
        }

        return result;
    }
};
