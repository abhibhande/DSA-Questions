class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        if(n != m)return false;
        s+=s;
        n*=2;
        
        if(s1.find(s2) != string::npos)
            return true;

        return false;
    }
};