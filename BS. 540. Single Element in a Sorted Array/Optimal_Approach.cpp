class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, n = nums.size()-1;;
        int high = n;

        if(nums.size() == 1)
            return nums[0];

        while(low <= high)
        {
            int mid = (low + high)/2;

        //Strivers Code
            //if arr[mid] is the single element:
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        }

        //we are in the left:
        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1])
                || (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            //eliminate the left half:
            low = mid + 1;
        }
        //we are in the right:
        else {
            //eliminate the right half:
            high = mid - 1;
        }


            // if(mid % 2 == 0)
            // {
            //     if(mid < n && nums[mid + 1] == nums[mid])
            //     {
            //         low = mid + 1;
            //     }
            //     else if(mid > 0 && nums[mid - 1] == nums[mid])
            //     {
            //         high = mid - 1;
            //     }
            //     else
            //     {
            //         return nums[mid];
            //     }
            // }
            // else
            // {
            //     cout<<mid << "-"<<n-1<<endl;
            //     if(mid > 0 && nums[mid - 1] == nums[mid])
            //     {
            //         low = mid + 1;
            //     }
            //     else if(mid < n && nums[mid + 1] == nums[mid])
            //     {
            //         high = mid - 1;
            //     }
            //     else
            //     {
            //         return nums[mid];
            //     }
            // }
        }

        return 0;
    }
};