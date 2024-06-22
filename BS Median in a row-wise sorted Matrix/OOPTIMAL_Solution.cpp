//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findCount(vector<vector<int>> mat,int limit,int R,int C)
    {
        int count=0;
        
        for(int i=0;i<R;i++)
        {
            int low=0;
            int high=C-1;
            while(low <= high)
            {
                int mid=(low + high)/2;
                if(mat[i][mid] > limit)
                {
                    high = mid - 1;
                }
                else
                    low = mid + 1;
                
            }
            count+=low;
        }
        
        return count;
    }

    int median(vector<vector<int>> &matrix, int R, int C){
        // code here    
        int low=INT_MAX;
        int high=INT_MIN;
        
        for(int i=0;i<R;i++)
        {   
                            // [Row][Column] ith row and 0th Column
            low=min(low,matrix[i][0]);
            high= max(high,matrix[i][C-1]);
        }
        
        int Count=(R*C)/2;
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            int count=findCount(matrix,mid,R,C);
            if(count > Count)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends