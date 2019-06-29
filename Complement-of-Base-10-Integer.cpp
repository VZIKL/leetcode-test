//File Name: Complement-of-Base-10-Integer.cpp
//Author:
//Mail:
//Created Time: 六  6/29 21:01:33 2019
class Solution {
public:
    int bitwiseComplement(int N)
    {
        if (N == 0) {
            return 1;
        }
        int arr[64];
        int i = 0, r;
        while (N != 0) {
            r = N % 2;
            arr[i++] = r;
            N /= 2;
        }
        string result;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] == 0) {
                result.push_back('1');
            } else {
                result.push_back('0');
            }
        }

        return std::stoi(result, 0, 2);
    }
};
