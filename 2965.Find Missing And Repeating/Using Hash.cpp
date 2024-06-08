//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        
        int a[n+1]={0};
        
        for(int i=1;i<=n;i++)
        {
            a[arr[i-1]]+=1;
        }
        
        int val1=0,val2=0;
        
        for(int i=1;i<=n;i++)
        {
            if(a[i] > 1)
            {
                val1=i;
            }
            else if(a[i] == 0)
            {
                val2=i;
            }
        }
        
        return {val1,val2};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends