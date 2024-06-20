//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        int n=stations.size();
        vector<double> dist;
        vector<int> gasloc;
        
        for(int i=0;i<n-1;i++)
        {
            dist.push_back(stations[i+1] - stations[i]);
            gasloc.push_back(0);
        }
        
        for(int i=0;i<k;i++)
        {
            double maxi=0;
            int loc =-1;
            for(int j=0;j<n;j++)
            {
                if(maxi < dist[j])
                {
                    maxi = dist[j];
                    loc = j;
                }
            }
            gasloc[loc]+=1;
            dist[loc] = (double)(stations[loc + 1]- stations[loc]) / (double)(gasloc[loc]+1);
        }
        
        double maxi=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            // cout<<dist[i]<<" ";
            maxi = max(maxi,dist[i]);
        }
        return maxi;
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