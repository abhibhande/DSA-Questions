class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string word="",ans="";

        for(int i=0;i<n;i++)
        {

            if(s[i] == ' ')
            {
                if(ans != "")
                {
                    ans=word +" "+ ans;
                }
                else
                    ans=word;

                while(i < n && s[i+1] == ' ')i++;
                word="";
            }
            else
            {
                    word+=s[i];
            }
        }

        cout<< word;
        if(ans=="")return word;
        if(word!="")ans=word +" "+ ans;
        return ans;

    }
};