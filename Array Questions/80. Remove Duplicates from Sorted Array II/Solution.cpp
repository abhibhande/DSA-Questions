class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=1;
        int j=1;
        int n=nums.size();
        if(n<=2)
        {
            return n;
        }

        while(j<n)
        {
            while(j < n && nums[i-1] == nums[j])
            {
                j++;
            }
            if(j == n)break;
            if(i != j)
                nums[i + 1] = nums[j];
            i++;
            j++;
        }
        if(i==j)return i;
        return i+1;
    }
};