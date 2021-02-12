/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    // 用一个临时数组优化空间
    vector<int> getRow(int rowIndex) {
        int count = rowIndex + 1;
        vector<int> resVec;// = vector<int>(count);
        resVec.push_back(1);
        vector<int> tmpVec;// = vector<int>(count);
        for (int i = 1; i < count; i++)
        {
            tmpVec.push_back(1);
            for (int j = 1; j < i; j++)
            {
                tmpVec.push_back(resVec[j - 1] + resVec[j]);
            }
            tmpVec.push_back(1);
            resVec.erase(resVec.begin(), resVec.end());
            resVec.insert(resVec.begin(), tmpVec.begin(), tmpVec.end());
            tmpVec.erase(tmpVec.begin(), tmpVec.end());
        }
        return resVec;
    }
};

// int main(int argc, char const *argv[])
// {
//     Solution st;
//     st.getRow(3);
//     return 0;
// }

// @lc code=end

