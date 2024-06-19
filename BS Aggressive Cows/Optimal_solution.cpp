//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool find(vector<int> &stalls,int dis,int k)
    {
        int n=stalls.size();
        int last=stalls[0];
        int cnt=1;
        
        for(int i=0;i<n;i++)
        {
            if((stalls[i] - last) >= dis)
            {
                cnt++;
                last= stalls[i];
            }
        }
        
        if(cnt >= k)return true;
        
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        int low = 1,high = INT_MIN;
        sort(stalls.begin(),stalls.end());
       
            high = stalls[n-1];
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            if(find(stalls,mid,k))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1 ;
            }
        }
        
        return high;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends