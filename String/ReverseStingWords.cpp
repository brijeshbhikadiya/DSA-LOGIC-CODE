class Solution {
public:
    string reverseWords(string s) {

            stringstream ss(s);
            string finals,s1;

            vector<string>sss;

            while (ss >> finals)
            {
                sss.push_back(finals);
            }
            
            reverse(sss.begin(),sss.end());

            for(int i=0;i<sss.size();i++){
                s1+=sss[i]+" ";
            }

            s1.pop_back();
            
            return s1;
    }
};