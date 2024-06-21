class Solution {
public:
    int findMax(vector<int> v,int n)
    {
        int maxi=0,index=-1;
        for(int i=0;i<n;i++)
        {
            if(maxi < v[i])
            {
                maxi=v[i];
                index=i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int low=0,high=m-1;

        // m*n
        while(low<=high)
        {
            int mid=(low+high)/2;
            int col=findMax(mat[mid],n);
            int top=mid-1>=0 ? mat[mid - 1][col] : -1;
            int bottom=mid+1 < m ? mat[mid + 1][col] : -1;

            if(mat[mid][col] > top && mat[mid][col] > bottom)
                {
                cout<<bottom;
                return {mid,col};
                }
            else if(mat[mid][col] < top)
                high=mid-1;
            else
                low = mid + 1;
        }
        return {-1,-1};
    }
};