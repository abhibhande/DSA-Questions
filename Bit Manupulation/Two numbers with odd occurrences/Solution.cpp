//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        long long first,second;
        
        long long XOR=0;
        for(int i=0;i<N;i++)
        {
            XOR=Arr[i] ^ XOR;
        }
        
        int num=(XOR & (XOR-1)) ^ XOR;
        
        int XOR1=0,XOR2=0;
        
        for(int i=0;i<N;i++)
        {
            if((Arr[i] & num) == 0 )
                XOR1=XOR1^Arr[i];
            else
                XOR2=XOR2^Arr[i];
        }
        
        if(XOR2 > XOR1)
            return {XOR2,XOR1};
        
        return {XOR1,XOR2};
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends