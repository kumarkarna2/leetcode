class Solution
{
public:
    vector<string> uncommonFromSentences(string s1, string s2)
    {
        unordered_map<string, int> mp;
        string temp = "";
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == ' ')
            {
                mp[temp]++;
                temp = "";
            }
            else
            {
                temp += s1[i];
            }
        }
        mp[temp]++;
        temp = "";
        for (int j = 0; j < s2.length(); j++)
        {
            if (s2[j] == ' ')
            {
                mp[temp]++;
                temp = "";
            }
            else
            {
                temp += s2[j];
            }
        }
        mp[temp]++;
        vector<string> v;
        for (auto x : mp)
        {
            if (x.second == 1)
                v.push_back(x.first);
        }

        return v;
    }
};