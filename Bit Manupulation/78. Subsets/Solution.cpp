class Solution {
public:

    // void getSubsets(int i,vector<int> nums,vector<int> subset,vector<vector<int>>& subsets)
    // {
    //     if(i==nums.size())
    //     {
    //         subsets.push_back(subset);
    //         return;
    //     }
        
    //         getSubsets(i + 1,nums,subset,subsets);

    //         subset.push_back(nums[i]);
    //         getSubsets(i + 1,nums,subset,subsets);
    // }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        // vector<int> subset;
        // getSubsets(0,nums,subset,subsets);


        //By using Bit Manipulation

        int len=nums.size();
        int n=(1<<len);

        for(int i=0;i<n;i++)
        {
            vector<int> subset;
            for(int j=0;j<len;j++)
            {
                if((i&(1<<j)) != 0)
                {
                    subset.push_back(nums[j]);
                }
            }
            subsets.push_back(subset);
        }


        return subsets;
    }
};