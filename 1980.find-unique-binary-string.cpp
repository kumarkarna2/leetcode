/*
 * @lc app=leetcode id=1980 lang=cpp
 *
 * [1980] Find Unique Binary String
 */

// @lc code=start
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {

        int n = nums.size();
        string ans = "";
        for(int i = 0; i < n; i++) {
            if(nums[i][i] == '0') {
                ans += '1';
            } else {
                ans += '0';
            }
        }
        return ans;
        
    }
};
// @lc code=end

