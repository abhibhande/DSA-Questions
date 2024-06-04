// 48. Rotate Image
// Solved
// Medium
// Topics
// Companies
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

// Example 1:

// Input: matrix = [[1,2,3],
                    // [4,5,6],
                    // [7,8,9]]
// Output: [[7,4,1],
            // [8,5,2],
            // [9,6,3]]

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
	    
	   
	   for(int i=0;i<n;i++)
	    {
	        for(int j=i;j<n;j++)
	        {
	            swap(arr[i][j],arr[j][i]);
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        reverse(arr[i].begin(),arr[i].end());
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