class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        if(n != m)return false;
        s+=s;
        n*=2;
        for(int i=0;i<n;i++)
        {
            int j=0;
            if(s[i] == goal[j])
            { int i1=i;
                while(i<n && j<m)
                {
                    if(s[i1] == goal[j])
                    {
                        i1++;
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(j==m)return true;
            }
        }

        return false;
    }
};