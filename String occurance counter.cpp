// aabbbccdddd ->a2b3c2d4

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string ans="";
    string str="hi i am abhi";
    // getline(cin,str);

    int i=0,n=str.length();

    while(i<n)
    {
        if((i+1) < n && str[i] == str[i + 1])
        {
            int count = 1;
            i++;
            while( i < n && str[i] == str[i - 1])
            {
                count++;
                i++;
            }
            ans +=str[i - 1];
            ans += to_string(count);
        }
        else{
            ans += str[i];
            ans += "1";
            i++;
        }
    }
    cout<<ans;
    
}