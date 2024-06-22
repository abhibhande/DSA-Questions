class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans="";
        int n=s.length();
        int count=0;

        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            if(ch == '(')
            {
                st.push('(');
                count++;
            }
            else
            {
                count--;
                if(count<=0)
                {
                    st.pop();
                }
                else
                {
                    st.pop();
                    while(!st.empty())
                    {
                        ans+="(";
                        st.pop();
                    }
                    st.push('(');
                    ans+=")";
                }
            }
        }
        return ans;
        
    }
};