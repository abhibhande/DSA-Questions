class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int ans=0;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            int cnt=0,mini=INT_MAX,maxi=INT_MIN;
            for(int j=i;j<n;j++)
            {
                mini=min(mini,nums[j]);
                maxi=max(maxi,nums[j]);
                if(maxi-mini <= limit)
                    cnt++;
                else 
                    break;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};