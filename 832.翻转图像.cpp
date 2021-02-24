/*
 * @lc app=leetcode.cn id=832 lang=cpp
 *
 * [832] 翻转图像
 */
#include "headers.h"

// @lc code=start
class Solution {
public:
    // 双指针法 Cost 4 ms
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int n = A.size();
        for (int i = 0; i < n; i++)
        {
            int left = 0;
            int right = n - 1;
            while (left < right)
            {
                if (A[i][left] == A[i][right])
                {
                    // 异或反转值
                    A[i][left] ^= 1;
                    A[i][right] ^= 1;
                }
                left++;
                right--;
            }
            // 奇数则反转
            if (left == right)
            {
                A[i][left] ^= 1;
            }
        }
        return A;
    }
};
// @lc code=end

