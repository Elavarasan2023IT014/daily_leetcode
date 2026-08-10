class Solution {
public:
    void permute(int start,vector<int>&nums,set<vector<int>>&st)
    {
        if(start == nums.size()-1)
        {
            st.insert({nums});
            return;
        }
        for(int i=start;i<nums.size();i++)
        {
            swap(nums[start],nums[i]);
            permute(start+1,nums,st);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>st;
        permute(0,nums,st);
        vector<vector<int>>res(st.begin(),st.end());
        return res;
    }
};