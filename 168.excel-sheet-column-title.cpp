 /*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
 class Solution
 {
 public:
     string convertToTitle(int columnNumber)
     {
         string ans;
         int num = columnNumber;
         while (num)
         {
             int rem = (num - 1) % 26;
             char c = rem + 65;
             // cout << c << " ";
             ans += c;
             int q = (num - 1) / 26;
             num = q;
         }
         reverse(ans.begin(), ans.end());
         return ans;
     }
 };
// @lc code=end

