/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            // +1
            digits[i]++;
            // 取模
            digits[i] = digits[i] % 10;
            // 判断是否进位
            if (digits[i] != 0)
            {
                return digits;
            }
        }
        // 到此则需进位了
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
// @lc code=end

