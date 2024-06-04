// Given a N x N 2D matrix Arr representing an image. Rotate the image by 90 degrees (anti-clockwise direction). You need to do this in place. Note that if you end up using an additional array, you will only receive the partial score.

// Example 1:

// Input:
// N = 3
// Arr[][] = {{1,  2,  3}
//            {4,  5,  6}
//            {7,  8,  9}}
// Output:
//  3  6  9 
//  2  5  8 
//  1  4  7 
// Explanation: The given matrix is rotated
// by 90 degree in anti-clockwise direction.

//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    // code here  
	    
	    //For clock wise reverse step first Transpose then reverse row
	    
	   // For anti Clock wise first reverse the row then transpose
	   
	   for(int i=0;i<n;i++)
	    {
	        reverse(arr[i].begin(),arr[i].end());
	    }
	   
	   for(int i=0;i<n;i++)
	    {
	        for(int j=i;j<n;j++)
	        {
	            swap(arr[i][j],arr[j][i]);
	        }
	    }
	    
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            vector<int> a;
            for (int j = 0; j < n; j++) {
                cin >> x;
                a.push_back(x);
            }
            arr.push_back(a);
        }
        Solution ob;
        ob.rotateMatrix(arr, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends