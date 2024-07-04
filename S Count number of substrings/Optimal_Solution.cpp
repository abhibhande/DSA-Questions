//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int count(string s,int k)
    {
        int n=s.length();
        int i=0;
        int j=0;
        long long int cnt=0;
        int distinct=0;
        vector<int> v(26,0);
        
        while(j<n)
        {
            v[s[j] -'a']++;
            if(v[s[j] -'a'] == 1)
            {
                distinct++;
            }
            while(distinct > k && i<=j)
            {
                v[s[i] - 'a']--;
                if(v[s[i] -'a']==0)
                    distinct--;
                i++;
            }
            if(distinct <= k)
                cnt+=(j-i)+1;
            j++;
        }
        return cnt;
    }
  
    long long int substrCount (string s, int k) {
    	//code here.
    	return (count(s,k)- count(s,k-1));
    	
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