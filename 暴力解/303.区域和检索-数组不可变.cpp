/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */
#include "headers.h"

// @lc code=start
class NumArray {
private:
    vector<int> nums;

public:
    // 暴力解，cost : 388 ms
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }
    
    int sumRange(int i, int j) {
        int res = 0;
        for (int k = i; k <= j; k++)
        {
            res += this->nums[k];
        }
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end

