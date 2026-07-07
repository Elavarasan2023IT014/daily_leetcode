class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_map<int,int>mp;
        for(int i : candyType)
        {
            mp[i]++;
        }
        int maxi = n/2;
        int s = mp.size();
        if(maxi<=s) return maxi;
        return s;
    }
};