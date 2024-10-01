//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countBits(int n)
    {
        int count=0;
        
        while(n>0)
        {
            count++;
            n=n&(n-1);
        }
        return count;
    }
    
    int countSetBits(int n)
    {
        // Your logic here
        if(n==0)
            return n;
        
        if(n == 1 || n == 2)
            return 1;
        
        int count=2;
        int i=3;
        while(i<=n)
        {
            count+=countBits(i);
            i++;
        }
        return count;
            
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends