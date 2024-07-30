#include<bits/stdc++.h>
using namespace std;

int findCount(vector<int>& v)
{
    int n=v.size(),countsofZeros=0,countofOnes=0;
    for(int i=0;i<n;i++)
    {
        if(v[i] == 0)
            countsofZeros++;
        else
            countofOnes++;
    }

    
    if(countsofZeros < countofOnes)
        return 2*countsofZeros;
    
    return 2*countofOnes;
}

int main()
{
    int n,countsofZeros=0,countofOnes=0;

    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++)
    {   int t=0;
        cin>>t;
        v.push_back(t);
    }

    cout<<findCount(v);

    return 0;
}