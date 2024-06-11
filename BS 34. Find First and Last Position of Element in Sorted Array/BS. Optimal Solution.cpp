class Solution {
public:

    int last(vector<int>& nums, int i,int j, int target)
    {
        while(i<=j)
        {
            int mid=(i+j)/2;

            if(nums[mid] == target)
            {

                i=mid+1;
            }
            else if(nums[mid] > target)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }

        return i-1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0,j=nums.size() -1;
        vector<int> ans(2,-1);

        while(i<=j)
        {
            int mid=(i+j)/2;

            if(nums[mid] == target)
            {
                if(ans[1]==-1)
                ans[1]=last(nums,mid,j,target);

                j=mid-1;
            }
            else if(nums[mid] > target)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }

        if(ans[1]==-1)return ans;

        ans[0]=j+1;
        return ans;
    }
};