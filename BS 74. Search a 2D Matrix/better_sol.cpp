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
        int low=0,high=n-1;

        while(low <= high)
        {
            int mid=(low+high)/2;
            if(matrix[mid][0] <= target && matrix[mid][m-1] >= target)
            {
                return isFound(matrix,mid,target);
            }
            else if(matrix[mid][0] > target)
                high = mid -1;
            else
                low = mid + 1;
        }

        return false;

    }
};