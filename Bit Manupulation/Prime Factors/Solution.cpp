//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    set<int> st;
	    vector<int> ans;
	    int i=2;
	    
	    while(i<=N)
	    {
	        if(N%i == 0)
	        {
	           ans.push_back(i);
	           while((N%i) == 0 &&  N > 1)
	           {
	               N=N/i;
	           }
	        }
	        i++;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends