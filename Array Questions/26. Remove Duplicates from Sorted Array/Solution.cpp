class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // int k=0;
        // vector<int> ans;
        // int pre=nums[0];
        // ans.push_back(pre);

        // for(int i=1;i<nums.size();i++)
        // {
        //     if(pre!=nums[i])
        //     {
        //         pre=nums[i];
        //         ans.push_back(nums[i]);
        //     }
        // }
        
        // for(int i=0;i<ans.size();i++)
        // {
        //     nums[i]=ans[i];
        // }
        // return ans.size();


        int i=0,j=1;
        int n=nums.size();

        while(j<n)
        {
            if(nums[i] != nums[j])
            {
                nums[i+1]=nums[j];
                i++;
            }
            j++;
        }
        return (i+1);

    }
};