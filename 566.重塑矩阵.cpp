/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size();
        int col = nums[0].size();
        // 数量不匹配
        if (row * col != r * c)
        {
            return nums;
        }
        // 新列顺序填充
        vector<vector<int>> ans = vector<vector<int>>(r, vector<int>(c));
        for (int i = 0; i < row * col; i++)
        {
            ans[i / c][i % c] = nums[i / col][i % col];
        }
        return ans;
    }
};
// @lc code=end

