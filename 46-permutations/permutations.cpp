class Solution {
public:
    void permute(int start,vector<int>&nums,vector<vector<int>>&res)
    {
        if(start == nums.size()-1)
        {
            res.push_back(nums);
            return;
        }
        for(int i=start;i<nums.size();i++)
        {
            swap(nums[start],nums[i]);
            permute(start+1,nums,res);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        permute(0,nums,res);
        return res;
    }
};