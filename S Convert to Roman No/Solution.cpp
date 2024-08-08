//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:

    string convertToRoman(int n) {
        // code here
        string roman="";
        int temp=n;
        
        int num[]={1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string r[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=(end(num) - begin(num))-1;
        
        while(temp>0)
        {
            int count=temp / num[i];
            temp %= num[i];
            while(count--)
            {
                roman+=r[i];
            }
            i--;
        }
        return roman;
        
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
// } Driver Code Ends