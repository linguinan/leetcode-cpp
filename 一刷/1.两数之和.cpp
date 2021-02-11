/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

#include "headers.h"

// @lc code=start
class Solution {
public:
    // cost: 8ms
    vector<int> twoSum(vector<int>& nums, int target) {
        // 无序，哈希
        unordered_map<int, int> hashMap;
        // 一次循环，顺序读取，可避免 [3, 3]\n6
        for (int i = 0; i < nums.size(); i++)
        {
            auto it = hashMap.find(target - nums[i]);
            // 避免重复
            if (it != hashMap.end())
            {
                return {it->second, i};
            }
            hashMap[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

