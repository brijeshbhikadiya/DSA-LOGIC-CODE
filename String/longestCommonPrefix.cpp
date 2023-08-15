class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int size=strs.size();
        string start=strs[0],ans="";
        string end=strs[size-1];
        for(int i=0;i<start.size();i++)
        {
            if(start[i]==end[i])
            {
                ans+=start[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};