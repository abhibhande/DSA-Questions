//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> a, int n) {
        // code here
        
        long long sn=0,sn2=0,s2n=0,s2n2=0;
        
        sn=(n*(n+1))/2;
        
        sn2= (n*(n+1)*((2*n)+1))/6;
        
        for(int i=0;i<n;i++)
        {
            s2n += a[i];
            
            s2n2 += (long long)a[i] * (long long)a[i];
        }
        
        long long val1= s2n - sn;
        
        long long val2= s2n2 - sn2;
        
        val2=val2/val1;
        
        long long x=(val2 + val1)/2;
        long long y= val2 - x;
        
        return {(int)x, (int)y};
        
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