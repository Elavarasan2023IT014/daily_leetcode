class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        unordered_map<char,int>mp;
        string res;
        for(char ch : s)
        {
            mp[ch]++;
        }
        int size = 0;
        for(auto p : mp)
        {
            if(p.first!=x)
            {
                int n = p.second;
                for(int i=0;i<n;i++)
                {
                    res+=p.first;
                }
            }
            else
            {
                size = p.second;
            }
        }
        if(size)
        {
            for(int i=0;i<size;i++)
                {
                    res+=x;
                }
        }
        return res;

    }
};