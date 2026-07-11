class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>res;
        if(nums.empty()) return res;
        int start = nums[0];
        int ext = start;
        int i;
        for(i=1;i<nums.size();i++)
        {
            if(ext+1 == nums[i]) 
            {
                ext++;
                continue;
            }
            else
            {
                if(start == nums[i-1])
                {
                    res.push_back(to_string(start));
                    start = nums[i];
                    ext = start;
                    continue;
                }
                string str = to_string(start)+"->"+to_string(nums[i-1]);
                res.push_back(str);
                start = nums[i];
                ext = start;
            }
        }
        if(start == nums[i-1])
        {
            res.push_back(to_string(start));
        }
        else
        {
            string str = to_string(start)+"->"+to_string(nums[i-1]);
                res.push_back(str);
        }
        return res;
    }
};