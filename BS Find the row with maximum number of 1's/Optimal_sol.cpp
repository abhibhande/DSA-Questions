//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

    int findCount(vector<vector<int>> arr,int i)
    {
        int n=arr[i].size();
        int low=0,high=n;
        while(low <= high)
        {
            int mid=(low + high)/2;
            if(arr[i][mid] == 0)
            {
                low=mid+1;
            }
            else
                high= mid-1;
        }
        return n-low;
    }

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int index=-1;
	    int maxi=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        int count=findCount(arr,i);
	        if(count > maxi)
	        {
	            maxi=count;
	            index=i;
	        }
	    }
	    return index;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends