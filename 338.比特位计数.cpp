/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */
#include "headers.h"

// @lc code=start
class Solution {
private:
    int countOnes(int num) {
        int res = 0;
        while (num > 0)
        {
            res++;
            num &= (num - 1);
        }
        return res;
    }

public:
    // 直接统计位一个数
    vector<int> countBits(int num) {
        vector<int> sums = vector<int>(num + 1);
        for (int i = 0; i <= num; i++)
        {
            sums[i] = countOnes(i);
        }
        return sums;
    }
};
// @lc code=end

