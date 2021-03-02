/*
 * @lc app=leetcode.cn id=304 lang=cpp
 *
 * [304] 二维区域和检索 - 矩阵不可变
 */
#include "headers.h"

// @lc code=start
class NumMatrix {
private:
    vector<vector<int>> sums;

public:
    // 一维前缀和 cost : 36 ms
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (m <= 0)
            return;
        int n = matrix[0].size();
        if (n <= 0)
            return;
        
        sums.resize(m + 1);
        for (int i = 0; i < m; i++)
        {
            sums[i].resize(n + 1);
            for (int j = 0; j < n; j++)
            {
                sums[i][j + 1] = sums[i][j] + matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int res = 0;
        for (int i = row1; i <= row2; i++)
        {
            res += sums[i][col2 + 1] - sums[i][col1];
        }
        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
// @lc code=end

