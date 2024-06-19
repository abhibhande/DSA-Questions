//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long fintPainters(int arr[],int boards,int n)
    {
        int painters=1;
        int boardcount=0;
        
        for(int i=0;i<n;i++)
        {
            if(boardcount  + arr[i] <= boards)
            {
                boardcount += arr[i];
            }
            else
            {
                boardcount = arr[i];
                painters++;
            }
        }
        return painters;
    }
  
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        
        // if(n<k)return -1;
        
        long long low=0,high=0;
        
        for(int i=0;i<n;i++)
        {
            low=max((long long)arr[i],low);
            high+=arr[i];
        }
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            int painters=fintPainters(arr,mid,n);
            if(painters > k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid -1 ;
            }
        }
        return low;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends