class Solution {
public:

    int findDiv(vector<int>& nums,int mid){
        int div=0;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            div+=ceil((float)nums[i] / mid);
        }
        return div;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            // low=min(low,nums[i]);
            high=max(high,nums[i]);
        }
        
        int ans=0;

        while(low <= high)
        {
            int mid=(low+high)/2;
            int sol=findDiv(nums,mid);
            if(sol <= threshold)
                high=mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};