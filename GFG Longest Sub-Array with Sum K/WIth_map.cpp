// Given an array containing N integers and an integer K., Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value K.

 

// Example 1:
 

// Input :
// A[] = {10, 5, 2, 7, 1, 9}
// K = 15
// Output : 4
// Explanation:
// The sub-array is {5, 2, 7, 1}.
// Example 2:

// Input : 
// A[] = {-1, 2, 3}
// K = 6
// Output : 0
// Explanation: 
// There is no such sub-array with sum 6.


//Solution

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<int,int> mp;
        mp[0]=-1;
        
        int sum=0,ans=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            int diff=sum-K;
            
            auto find=mp.find(diff);
            
            if(find != mp.end())
            {
                ans=max(ans,i - mp[diff]);
            }
            
            find=mp.find(sum);
            
            if(find == mp.end())
            {
                mp[sum]=i;
            }
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends