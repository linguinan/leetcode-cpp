/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    // & 1 = 1 则低位为1
    // 右进去掉一位
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while (n > 0)
        {
            if ((n & 1) == 1)
            {
                cnt++;
            }
            n = n >> 1;
        }
        return cnt;
    }
};
// @lc code=end

