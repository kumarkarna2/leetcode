/*
 * @lc app=leetcode id=2085 lang=cpp
 *
 * [2085] Count Common Words With One Occurrence
 */

// @lc code=start
class Solution
{
public:
    int countWords(vector<string> &words1, vector<string> &words2)
    {
        unordered_map<string, int> mp;
        int ans = 0;
        for (int i = 0; i < words1.size(); i++)
        {
            if (mp.find(words1[i]) != mp.end())
            {
                mp[words1[i]] = -1;
            }
            else
            {
                mp[words1[i]]++;
            }
        }
        for (int j = 0; j < words2.size(); j++)
        {
            if (mp.find(words2[j]) != mp.end())
                mp[words2[j]]--;
        }

        for (auto k : mp)
        {
            if (k.second == 0)
                ans++;
        }
        return ans;
    }
};
// @lc code=end
