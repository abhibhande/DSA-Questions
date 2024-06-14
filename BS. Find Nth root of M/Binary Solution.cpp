//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	int fun(int mid,int n,int m)
	{
	    long long i=1,ans=mid;
	    while(i<n)
	    {
	        ans *= mid;
	        if(ans > m)return 2;
	        i++;
	    }
	    if(ans==m)return 1;
	    return 0;
	}
	
	int NthRoot(int n, int m)
	{
	    // Code here.
	    if(n==0)return m;
	    if(n==1)return m;
	    if(m==1)return 1;
	    
	    int low=2,high=m;
	    
	    while(low <= high)
	    {
	        int mid =(low + high)/2;
	        
	        int ans=fun(mid,n,m);
	        
	        if(ans==1)
	        {
	            return mid;
	        }
	        else if(ans == 2) 
	        {
	            high = mid - 1;
	            
	        }
	        else
	        {
	            low=mid+1;
	        }
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends