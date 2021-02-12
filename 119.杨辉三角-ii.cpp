/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int count = rowIndex + 1;
        vector<int> resVec = vector<int>(count);
        resVec[0] = 1;
        vector<int> tmpVec = vector<int>(count);
        for (int i = 1; i < count; i++)
        {
            tmpVec[0] = 1;
            for (int j = 1; j < i; j++)
            {
                tmpVec[j] = resVec[j - 1] + resVec[j];
            }
            tmpVec[i] = 1;
            for (int k = 0; k < i + 1; k++)
            {
                resVec[k] = tmpVec[k];
            }
        }
        return resVec;
    }
};
// @lc code=end

