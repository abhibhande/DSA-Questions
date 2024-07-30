class Solution {
public:
    bool checkString(string s) {
        char prev='a';
        for(auto ch : s)
        {
        
            if(prev == 'b' && ch == 'a')
                return false;

            if(ch=='b')
                prev='b';
        }
        return true;
        }
};