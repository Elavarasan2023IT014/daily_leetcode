class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxi = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int val = gcd(nums[i],nums[j]);
                long long k = (1LL*nums[i]*nums[j])/(1LL*val*val);
                if (maxi < k) {
                    maxi = k;
                }
            }
        }
        return maxi;
    }
};