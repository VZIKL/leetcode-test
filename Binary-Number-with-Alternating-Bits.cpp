//File Name: Binary-Number-with-Alternating-Bits.cpp
//Author:
//Mail:
//Created Time: 六  6/29 21:43:18 2019
class Solution {
public:
    bool hasAlternatingBits(int n)
    {
        int a = n % 2;
        n /= 2;
        while (n > 0) {
            if (a == n % 2) {
                return false;
            }
            a = n % 2;
            n /= 2;
        }
        return true;
    }
};
