// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.

 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.

// Solution

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

            int sum=0;
            int ans=INT_MIN;

            

            for(auto i : nums)
            {
                sum+=i;
                ans=max(sum,ans);
                if(sum<0)sum=0;
                
            }

            return ans;
    }
};