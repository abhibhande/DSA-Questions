class Solution {
public:
    bool isValid(string s, int i,int cnt)
    {
        if(i >= s.length())
            return (cnt == 0);
        if(cnt < 0)
            return false;
        
        if(s[i] == '(')
        {
            return isValid(s,i+1,cnt+1);
        }
        else if(s[i] == ')')
        {
            return isValid(s,i+1,cnt-1);
        }
        else
        {
            return (isValid(s,i+1,cnt-1) || isValid(s,i+1,cnt) || isValid(s,i+1,cnt+1));
        }
    }

    bool checkValidString(string s) {
        int n=s.length();
        return isValid(s,0,0);
    }
};