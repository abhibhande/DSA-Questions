class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0,j=nums.size()-1;

        if(nums.size() == 1)
            return 0;
        else if(nums[0]>nums[1])return 0;
        else if(nums[j]>nums[j-1])return j;

        while(i<=j)
        {
            int mid=(i+j)/2;

            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid+1])
                return mid;
            else if(nums[mid] > nums[mid-1])i=mid+1;
            else j=mid-1;
        }
        return -1;
    }
};