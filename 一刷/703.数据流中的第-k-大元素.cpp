/*
 * @lc app=leetcode.cn id=703 lang=cpp
 *
 * [703] 数据流中的第 K 大元素
 */
#include "headers.h"

// @lc code=start
class KthLargest {
private:
    int maxK;
    vector<int> vec;

public:
    // 628 ms
    KthLargest(int k, vector<int>& nums) {
        maxK = k - 1;
        // 预排序
        if (nums.size() > 0)
        {
            sort(nums.begin(), nums.end(), greater<int>());
        }
        vec = nums;
    }
    
    int add(int val) {
        // 处理初始空数组到情况
        if (vec.size() > 0)
        {
            // 二分法插入到目标位
            for (int i = 0; i < vec.size(); i++)
            {
                if (vec[i] > val)
                {
                    continue;
                }
                vec.insert(vec.begin() + i, val);
                return vec[maxK];
            }
        }
        vec.push_back(val);
        return vec[maxK];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end

