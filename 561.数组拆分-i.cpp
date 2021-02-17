/*
 * @lc app=leetcode.cn id=561 lang=cpp
 *
 * [561] 数组拆分 I
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int arr[20001];
        // 需先初始化，否则默认值不是0
        for (int i = 0; i < 20001; i++)
        {
            arr[i] = 0;
        }
        int sep = 10000;
        // 大数组，统计每个值出现的次数
        for(int num : nums)
        {
            arr[num + sep]++;
        }
        int ans = 0;
        int idx = 0;//匹配用
        for (int i = -10000; i <= 10000; i++)
        {
            int cnt = arr[i + sep];
            if (cnt > 0)
            {
                // 未有未匹配的
                if (idx % 2 == 0)
                {
                    ans += i;
                    cnt--;
                    idx++;
                }
                if (cnt > 0)
                {
                    // 偶数的互相匹配并消耗
                    ans += (cnt / 2) * i;
                    // 有剩则留下次用
                    if (cnt % 2 == 1)
                    {
                        idx++;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

