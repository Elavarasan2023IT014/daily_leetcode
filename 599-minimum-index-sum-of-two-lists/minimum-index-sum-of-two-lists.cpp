class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>res;
        unordered_map<string,int>mp1;
        int mini = INT_MAX;
       for(int i=0;i<list1.size();i++)
       {
        string str1 = list1[i];
        for(int j=0;j<list2.size();j++)
        {
            string str2 = list2[j];
            if(str1 == str2)
            {
                mp1.insert({str1,i+j});
            }
        }
       }
       for(auto p : mp1)
       {
            mini = min(p.second,mini);
       }
       for(auto p : mp1)
       {
            if(p.second == mini) res.push_back(p.first);
       }
    return res;
    }
};