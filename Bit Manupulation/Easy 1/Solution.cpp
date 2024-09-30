//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        int n=(1<<(i - 1));
        int temp=num;
        
        if((temp&n) == 0)
            cout<<0;
        else
            cout<<1;
        
        temp=num;
        
        int set=num|n;
        cout<<" "<<set;
        
        n=~n;
        temp=num&n;
        cout<<" "<<temp;
    }
};
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends