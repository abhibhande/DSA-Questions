//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        int n=stations.size();
        vector<int> gasloc(n-1,0);
        priority_queue<pair<double,int>> q;
        
        for(int i=0;i<n-1;i++)
        {
            q.push({stations[i+1] - stations[i], i});
        }
        
        for(int i=0;i<k;i++)
        {
            auto ele=q.top();
            //we have to pop because it will remain in the queue forever and we will get the same one
            q.pop();
            gasloc[ele.second]++;
            
            int index=ele.second;
            long double diff=(long double)(stations[index + 1] - stations[index]);
            long double newLength=diff/(long double)(gasloc[index] + 1);
            
            q.push({diff/(long double)(gasloc[index] + 1) , ele.second});
        }
        
        return q.top().first;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
    }
    return 0;
}
// } Driver Code Ends