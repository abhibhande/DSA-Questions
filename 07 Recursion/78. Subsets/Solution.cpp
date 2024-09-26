class Solution {
public:

    void getSubsets(int i,vector<int> nums,vector<int> subset,vector<vector<int>>& subsets)
    {
        if(i==nums.size())
        {
            subsets.push_back(subset);
            return;
        }
        
            getSubsets(i + 1,nums,subset,subsets);

            subset.push_back(nums[i]);
            getSubsets(i + 1,nums,subset,subsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int> subset;
        getSubsets(0,nums,subset,subsets);
        return subsets;
    }
};