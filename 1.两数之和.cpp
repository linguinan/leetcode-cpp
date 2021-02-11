/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    // cost: 4ms
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> kv;
        for (int i = 0; i < nums.size(); i++)
        {
            if (kv.count(target - nums[i]) > 0)
            {
                return {kv[target - nums[i]], i};
            }
            kv[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

