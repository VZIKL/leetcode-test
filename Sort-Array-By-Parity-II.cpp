//File Name: Sort-Array-By-Parity-II.cpp
//Author:
//Mail:
//Created Time: 六  6/29 16:23:45 2019
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A)
    {
        vector<int> result(A.size(), 0);
        int i = 0, j = 1;
        for (auto& n : A) {
            if (n % 2 == 0) {
                result[i] = n;
                i += 2;
            } else {
                result[j] = n;
                j += 2;
            }
        }
        return result;
    }
};
