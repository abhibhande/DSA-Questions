class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mps;
        map<char,char> mpt;
        int n=s.length();
        int m=t.length();

        if(n != m)return false;

        for(int i=0;i<n;i++)
        {
            if(mps[s[i]] == NULL && mpt[t[i]] == NULL)
            {
                cout<<i<<" ";
                mps[s[i]] = t[i]; 
                cout<<mps[s[i]]<<" ";
                mpt[t[i]] = s[i];
                cout<<mpt[t[i]]<<" ";
            }
            if(mps[s[i]] != t[i] && mpt[t[i]] != s[i])
                {
                    cout<<i;
                    return false;
                }

            mps[s[i]] = t[i];
            mpt[t[i]] = s[i];
        }

        return true;
    }
};