class Solution {
public:

    bool found(int pos1,string haystack,string needle)
    {
        int n=needle.length();
        int i=0,j=n-1;
        while(i<=j)
        {
            if((haystack[pos1 + i] != needle[i]) || haystack[pos1 + j] != needle[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    int strStr(string haystack, string needle) {
        // return haystack.find(needle);
        int n1 = haystack.length();
        int n2 = needle.length();
        // if(haystack == needle)
        // {
        //     return 0;
        // }

        for(int i=0;i<(n1 - n2) + 1 ;i++)
        {
            if(haystack[i] == needle[0])
            {
                if(found(i,haystack,needle))
                {
                    return i;
                }
            }
        }
        return -1;

    }
};