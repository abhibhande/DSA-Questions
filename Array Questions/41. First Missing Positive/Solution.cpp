class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size();

        vector<int> v;
        v.push_back(nums[0]);

        while(i<n)
        {
            if(nums[i] != v[v.size() - 1])
            {
                v.push_back(nums[i]);
            }
            i++;
        }

        i=0;
        n=v.size();
        while(i<n && v[i] <=0)
        {
            i++;
        }
        
        int ans=1;
        while(i < n)
        {
            if(v[i] != ans)
            {
                break;
            }
            i++;
            ans++;
        }
        return ans;
    }
};