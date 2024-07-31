class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();

        int i=0,j=n-1;

        while(i<=j)
        {
            if((nums[i] * nums[i]) < (nums[j] * nums[j]))
            {
                ans.insert(ans.begin(),(nums[j] * nums[j]));
                j--;
            }
            else
            {
                ans.insert(ans.begin(),(nums[i] * nums[i]));
                i++;
            }
        }
        return ans;
    }
};