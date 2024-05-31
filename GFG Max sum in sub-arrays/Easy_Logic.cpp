// Given an array Arr, with indexes running from 0 to N-1, select any two indexes, i and j such that i<=j-1. From subarray Arr[i...j], find the two smallest numbers and add them, you will get score for that subarray. Your task is to return maximum score possible in the given array Arr.
 

// Example 1:

// Input : arr[] = [4, 3, 1, 5, 6]
// Output : 11
// Subarrays with smallest and 
// second smallest are,
// [4, 3]        
// smallest = 3    second smallest = 4
// [4, 3, 1]    
// smallest = 1    second smallest = 3
// [4, 3, 1, 5]    
// smallest = 1    second smallest = 3
// [4, 3, 1, 5, 6]    
// smallest = 1    second smallest = 3
// [3, 1]         
// smallest = 1    second smallest = 3
// [3, 1, 5]     
// smallest = 1    second smallest = 3
// [3, 1, 5, 6]    
// smallest = 1    second smallest = 3
// [1, 5]        
// smallest = 1    second smallest = 5
// [1, 5, 6]    
// smallest = 1    second smallest = 5
// [5, 6]         
// smallest = 5    second smallest = 6
// Maximum sum among all 
// above choices is, 5 + 6 = 11


// solution
/*
    We can find minimum as finding max of any two adajecent no as any combination of that number will be less than that sum
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends


class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        long long ans=0;
        
        for(long long i=1;i<N;i++)
        {
            ans=max(ans,arr[i] + arr[i-1]);
            
        }
        
        return ans;
    }
};



//{ Driver Code Starts.
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
	    for(ll i=0;i<n;i++)
		    cin>>a[i];
		Solution ob;
	    cout<<ob.pairWithMaxSum(a,n)<<endl;
	}
	return 0;
}


// } Driver Code Ends