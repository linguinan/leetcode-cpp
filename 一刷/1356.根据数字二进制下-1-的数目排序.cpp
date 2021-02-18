/*
 * @lc app=leetcode.cn id=1356 lang=cpp
 *
 * [1356] 根据数字二进制下 1 的数目排序
 */
#include "headers.h"

// @lc code=start
class Solution {
private:
    int hammingWeight(int n)
    {
        int cnt = 0;
        while (n > 0)
        {
            cnt++;
            n &= (n - 1);
        }
        return cnt;
    }

public:
    // 暴力解，耗时(48 ms)
    vector<int> sortByBits(vector<int>& arr) {
        map<int, int> dic;
        for(int n : arr)
        {
            dic[n] = hammingWeight(n);
        }
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            if (dic[a] < dic[b])
            {
                return true;
            }
            if (dic[a] > dic[b])
            {
                return false;
            }
            return a < b;
        });
        return arr;
    }
};
// @lc code=end

