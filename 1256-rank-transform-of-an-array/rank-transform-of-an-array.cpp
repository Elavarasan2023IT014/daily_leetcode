class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy(arr.begin(),arr.end());
        sort(arr.begin(),arr.end());
        unordered_map<int,int>mp;
        int k = 1;
        for(int i : arr)
        {
            if(mp.find(i)==mp.end())
            {
                mp[i] = k;
                k++;
            }
        }
        for(int i=0;i<copy.size();i++)
        {
            copy[i] = mp[copy[i]];
        }
        return copy;
    }
};