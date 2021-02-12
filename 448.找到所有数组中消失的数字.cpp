/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    // 暴力解
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        map<int, int> kv;
        for(auto num : nums)
        {
            kv[num] = 1;
        }
        for (int i = 1; i <= nums.size(); i++)
        {
            if (kv.count(i) <= 0)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};
// @lc code=end

