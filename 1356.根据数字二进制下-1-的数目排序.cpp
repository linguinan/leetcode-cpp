/*
 * @lc app=leetcode.cn id=1356 lang=cpp
 *
 * [1356] 根据数字二进制下 1 的数目排序
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    // 根据递推公式做预处理：bit[i]=bit[i>>1]+(i&1)
    // cost (16 ms)
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> bits = vector<int>(10001);
        for (int i = 0; i < 10001; i++)
        {
            bits[i] = bits[i >> 1] + (i & 1);
        }
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            if (bits[a] < bits[b])
            {
                return true;
            }
            if (bits[a] > bits[b])
            {
                return false;
            }
            return a < b;
        });
        return arr;
    }
};
// @lc code=end

