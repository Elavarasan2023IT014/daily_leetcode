class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int tot = accumulate(nums.begin(),nums.end(),0);
        int left = 0;
        int right = 0;
        for(int i=0;i<n;i++)
        {
            if(i!=0) left+=nums[i-1];
            right = tot - left - nums[i];
            if(right == left)
            {
                return i;
            }
        }
        return -1;
    }
};