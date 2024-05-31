// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

// Example 1:

// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
    //     int sum=0;
    // //sum of first n numbers = (N(N+1))/2
    //    sum=size*(size+1)/2;

    //     for(int i:nums)
    //     {
    //         sum-=i;
    //     }

        // return sum;

    int xor1=0,xor2=0;

        for(int i=0;i<size;i++)
        {
            xor1=xor1 ^ nums[i]; 
            xor2=xor2 ^ (i+1);
        }

        return(xor1 ^ xor2);
    }
};
