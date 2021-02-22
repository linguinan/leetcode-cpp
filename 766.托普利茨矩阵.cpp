/*
 * @lc app=leetcode.cn id=766 lang=cpp
 *
 * [766] 托普利茨矩阵
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    // 遍历，当前元素如不等于左上角的，则不符合
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (matrix[i][j] != matrix[i - 1][j - 1])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

