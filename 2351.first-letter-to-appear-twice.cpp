/*
 * @lc app=leetcode id=2351 lang=cpp
 *
 * [2351] First Letter to Appear Twice
 */

// @lc code=start
class Solution
{
public:
    char repeatedCharacter(string s)
    {
        unordered_map<char, int> mp;
        char c;
        for (int i = 0; i < s.length(); i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                c = s[i];
                break;
            }
            else
            {
                mp[s[i]]++;
            }
        }
        return c;
    }
};
// @lc code=end
