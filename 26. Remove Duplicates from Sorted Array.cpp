// 26. Remove Duplicates from Sorted Array
// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).
// solution

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int k=0;
        vector<int> ans;
        int pre=nums[0];
        ans.push_back(pre);

        for(int i=1;i<nums.size();i++)
        {
            if(pre!=nums[i])
            {
                pre=nums[i];
                ans.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<ans.size();i++)
        {
            nums[i]=ans[i];
        }
        return ans.size();

    }
};