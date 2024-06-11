//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
	int last(int nums[], int i,int j, int target)
    {
        while(i<=j)
        {
            int mid=(i+j)/2;

            if(nums[mid] == target)
            {

                i=mid+1;
            }
            else if(nums[mid] > target)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }

        return i-1;
    }
		
	int count(int nums[], int n, int x) {
	    // code here
	    int i=0,j=n -1 ;
        int ans[2]={-1,-1};
        int target = x;

        while(i<=j)
        {
            int mid=(i+j)/2;

            if(nums[mid] == target)
            {
                if(ans[1]==-1)
                ans[1]=last(nums,mid,j,target);

                j=mid-1;
            }
            else if(nums[mid] > target)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }

        if(ans[1]==-1)return 0;

        ans[0]=j+1;
        return (ans[1] - ans[0])+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends