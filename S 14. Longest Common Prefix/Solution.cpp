class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        

        int ind=0;
        int n=strs[0].length();
        int m=strs.size();
        int i=0;

        for(i=0;i<n;i++)
        {
            if(strs[0][i] != strs[m-1][i])
            {
                break;
            }
        }

        return strs[0].substr(0,i);

    }
};