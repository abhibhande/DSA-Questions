//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        if(x==0)return 0;
        if(x==1) return 1;
        if(x==2)return 1;
        
        long long int low=2,high=x;
        while(low <= high)
        {
            long long int mid = (low + high)/2;
            if((mid*mid) == x)return mid;
            else if((mid * mid) > x)high = mid -1;
            else low = mid + 1;
        }
        
        return high;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends