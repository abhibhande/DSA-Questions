//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int substrCount (string s, int k) {
    	//code here.
    	int n=s.size();
    	long long cnt=0;
    	
    	for(int i=0;i<n;i++)
    	{
    	    set<char> st;
    	    for(int j=i;j<n;j++)
    	    {
    	        st.insert(s[j]);
    	        int siz=st.size();
    	        if(siz==k)
    	            cnt++;
    	        else if(siz>k)
    	            break;
    	            
    	    }
    	}
    	
    	return cnt;
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends