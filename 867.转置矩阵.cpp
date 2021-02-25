/*
 * @lc app=leetcode.cn id=867 lang=cpp
 *
 * [867] 转置矩阵
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    // 直接复制转换 (16 ms)
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ans = vector<vector<int>>(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = vector<int>(m);
            for (int j = 0; j < m; j++)
            {
                ans[i][j] = matrix[j][i];                
            }
        }
        return ans;
    }
};
// @lc code=end

