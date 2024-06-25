class Solution {
public:
    int myAtoi(string s) {
        long long val=0;
        int n=s.length();
        long long power=pow(2,31);

        int i=0;
        bool neg=false;
        //Remove White spaces
        while(s[i]==' ')
            i++;
        //checking for sign
        if(s[i]=='-')
        {   
            neg=true;
            i++;
        }
        else if(s[i]=='+')
        {
            i++;
        }

        //checking for zeros
        while(s[i]=='0')
            i++;

        //calculating Numbers
        for(;i<n;i++)
        {
            if((int)s[i] < 48 || (int)s[i] >57)
                break;
            val*=10;
            val+=(s[i] - 48);
            if(val > power)
                break;
        }
        if(neg)
            val*=(-1);
        if(val < -power)
            return -power;
        else if(val > power - 1)
            return power-1;
        return (int)val;
    }
};