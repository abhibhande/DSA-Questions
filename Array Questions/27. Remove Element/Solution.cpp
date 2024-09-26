class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0,j=n-1;

        while(i<=j)
        {
            while(i<n && nums[i] != val)
            {
                i++;
            }
            while(j>=0 && nums[j] == val)
            {
                j--;
            }
            if(j >= 0 && i<n && i<j)
            {
                swap(nums[i],nums[j]);
            }
        }
        return j+1;
    }
};