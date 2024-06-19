class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int cnt=0,n=nums.size();

        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            if(nums[i-1] >= nums[i])
            {
                int temp=(nums[i - 1]-nums[i]) + 1;
                nums[i]+=temp;
                cnt+=temp;
            }
        }
        return cnt;
    }
};