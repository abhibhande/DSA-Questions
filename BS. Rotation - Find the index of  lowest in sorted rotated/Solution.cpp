//I did not seen yet Strivers's Solution

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int low=0,high=n-1,ans=0;
	    int mini=INT_MAX;
	    
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        
	        if(arr[mid] >= arr[low])
	        {
	            if(mini > arr[low])
	            {
	                mini=arr[low];
	                ans=low;
	            }
	            
	            low=mid+1;
	        }
	        else
	        {
	            if(mini > arr[mid])
	            {
	                mini=arr[mid];
	                ans=mid;
	            }
	            high=mid-1;
	        }
	    }
	    return ans;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends