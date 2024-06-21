class Solution {
public:
    bool isFound(vector<vector<int>>& a,int i,int target)
    {
        int m=a[i].size();
        int low=0,high=m-1;

        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[i][mid] == target)
                return true;
            else if(a[i][mid] > target)
            {
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();

        for(int i=0;i<n;i++)
        {
            if(matrix[i][0] <= target && matrix[i][m-1] >= target)
            {
                
                if(isFound(matrix,i,target))
                    return true;
            }
        }

        return false;

    }
};