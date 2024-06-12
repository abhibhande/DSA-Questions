class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n - 1;
        while(low <= high)
        {
            int mid=(low+high)/2;

            if(target == nums[mid])return true;

            while(low<n && high >=0  && nums[low] == nums[mid] && nums[high] == nums[mid])
            {
                low++;
                high--;
                if(low > high)return false;
            }

            //Striver's Code for edge case
            //Edge case:
            // if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
            //     low = low + 1;
            //     high = high - 1;
            //     continue;
            // }
            

            if(nums[low] <= nums[mid])
            {
                if(nums[low] <= target && nums[mid] >= target)
                {
                    high= mid - 1;
                }
                else 
                {
                    low = mid + 1;
                }
            }
            else
            {
                if(target >= nums[mid] && target <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid -1;
                }
            }
        }

        return false;
    }
};