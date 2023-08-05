/*
 * @lc app=leetcode id=2053 lang=cpp
 *
 * [2053] Kth Distinct String in an Array
 */

// @lc code=start
class Solution
{
public:
    static bool cmp(pair<string, int> a, pair<string, int> b)
    {
        return a.second < b.second;
    }

    string kthDistinct(vector<string> &arr, int k)
    {
        unordered_map<string, pair<int, int>> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            if (mp.find(arr[i]) != mp.end())
            {
                mp[arr[i]].first = -1;
            }
            else
            {
                mp[arr[i]].first++;
                mp[arr[i]].second = i;
            }
        }
        vector<pair<string, int>> v;
        string ans = "";

        for (auto j : mp)
        {
            if (j.second.first == 1)
            {
                v.push_back({j.first, j.second.second});
            }
        }

        sort(v.begin(), v.end(), cmp);

        if (v.size() >= k)
        {
            ans = v[k - 1].first;
        }
        return ans;
    }
};

// @lc code=end
