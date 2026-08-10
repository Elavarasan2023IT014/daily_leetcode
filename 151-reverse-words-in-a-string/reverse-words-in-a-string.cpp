class Solution {
public:
    string reverseWords(string s) {
        vector<string>vec1;
        string res;
        stringstream ss(s);
        string word;
        while(ss>>word)
        {
            vec1.push_back(word);
        }
        for(int i=vec1.size()-1;i>=0;i--)
        {
            res+=vec1[i];
            if(i!=0) res+=" ";
        }
        return res;
    }
};