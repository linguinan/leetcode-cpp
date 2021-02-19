/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    // 数与减一相与清掉低位的1
    // & 进制位都为1才得1
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while (n > 0)
        {
            cnt++;
            n &= (n - 1);
        }
        return cnt;
    }
};
// @lc code=end

