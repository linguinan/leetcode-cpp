/*
 * @lc app=leetcode.cn id=1052 lang=cpp
 *
 * [1052] 爱生气的书店老板
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    // 滑动窗口
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int total = 0;
        int n = customers.size();
        for (int i = 0; i < n; i++)
        {
            total += customers[i] * (grumpy[i] == 0 ? 1 : 0);
        }
        // 生气的部分就是额外增加的
        int inc = 0;
        for (int i = 0; i < X; i++)
        {
            inc += customers[i] * grumpy[i];
        }
        int maxInc = inc;
        for (int i = X; i < n; i++)
        {
            inc = inc - customers[i - X] * grumpy[i - X] + customers[i] * grumpy[i];
            maxInc = max(maxInc, inc);
        }
        return total + maxInc;
    }
};
// @lc code=end

