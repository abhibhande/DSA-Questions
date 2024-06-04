//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
        
        int rowstart=0,rowend=r-1, colstart=0, colend=c-1;
        
        while(rowstart<=rowend && colstart<=colend)
        {
            for(int i=colstart;i<=colend;i++)
            {
                ans.push_back(matrix[rowstart][i]);
            }
            rowstart++;
            
            for(int i=rowstart; i<=rowend; i++)
            {
                ans.push_back(matrix[i][colend]);
            }
            colend--;
        
                
            if( rowstart <= rowend )
            {
                for(int i=colend; i>=colstart; i--)
                {
                    ans.push_back(matrix[rowend][i]);
                }
                rowend--;
            }
                
            if(colstart <= colend)
            {
                for(int i=rowend;i>=rowstart;i--)
                {
                    ans.push_back( matrix[i][colstart]);
                }
                colstart++;
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends