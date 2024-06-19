class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        map<int, int> mp;
        int cnt=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
            while(mp.find(nums[i]) != mp.end()) 
                {
                    cnt++;
                    nums[i]++;
                }               
            }
            mp[nums[i]]++;   
            
        }
        return cnt;
    }
};