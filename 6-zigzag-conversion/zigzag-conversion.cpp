class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        if(numRows == 1 || numRows>=n) return s;
        vector<string>res(numRows);
        int curr = 0;
        bool down = false;
        for(char ch : s)
        {
            res[curr]+=ch;
            if(curr == 0 || curr == numRows-1) down = !down;
            curr+= down? 1 : -1;
        }
        string fi = "";
        for(string str : res)
        {
            fi+=str;
        }
        return fi;
    }
};