/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> resVec;
        if (numRows == 0)
        {
            return resVec;
        }
        resVec.push_back({1});
        for (int i = 1; i < numRows; i++)
        {
            vector<int> preVec = resVec[i - 1];
            vector<int> curVec;
            curVec.push_back(1);
            for (int j = 1; j < i; j++)
            {
                // KEY: 每一行的值都是前一行的前一位加当前位之和
                curVec.push_back(preVec[j - 1] + preVec[j]);
            }
            curVec.push_back(1);
            resVec.push_back(curVec);
        }
        return resVec;
    }
};
// @lc code=end

