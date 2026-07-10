class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i:nums)
            a[i]++;
        int maxval=INT_MIN;
        int s = nums.size()/2;
        for(auto x:a)
        {
            if(x.second>s)
                maxval=x.first;
        }
        return maxval;
    }
};