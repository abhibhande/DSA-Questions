#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    // cout<<"calculating count\n";
    while(n > 0)
    {
        if(n&1)
        {
            count++;
        }
       n=n>>1;
    }

    // cout<<"calculating answer\n";
    int ans=1,power=2;
    for(int i=1;i<count;i++)
    {
        ans += power;
        power *= 2;
    }
    cout<<"ans:"<<ans;

    return 0;
}