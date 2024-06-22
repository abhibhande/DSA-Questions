class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        map<int,int> mp;
        int count=0;
        mp[0]=1;
        int ans=0;

        for(auto val : nums)
        {
            if(val%2 != 0)
            {
                count++;
            }
            ans+=mp[count - k];
            mp[count]++;
        }
        return ans;
    }
};