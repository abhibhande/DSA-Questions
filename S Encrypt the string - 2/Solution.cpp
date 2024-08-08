//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  string intToHexa(int n)
  {
    string hex="";
    
    while(n>0)
    {
        int rem = n % 16;
        
        if (rem < 10) {
            hex += rem + 48;
        }
        else {
            hex += rem + 87;
        }
        
        n=n/16;
    }
    return hex;
    
  }
  
  string reverse(string str)
  {
      int n=str.length();
      n--;
      for(int i=0;i<=n;i++)
      {
          swap(str[i],str[n]);
          n--;
      }
      return str;
  }
  
    string encryptString(string S) {
        // code here
        string ans="";
        int n=S.length();
        
        for(int i=0;i<n;i++)
        {
            int count = 0;
            int j=i;
            while(i<n && S[j] == S[i])
            {
                i++;
                count++;
            }
            i--;
            ans+= (S[j] + intToHexa(count));
        }
        return reverse(ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.encryptString(S)<<endl;
    }
    return 0;
}
// } Driver Code Ends