class Solution {

    int partition(int mid,int[] nums)
    {
        int sum=0;
        int k=1;
        for(int i=0;i<nums.length;i++)
        {
            if((sum+nums[i]) > mid)
            {
                k++;
                sum=nums[i];
            }
            else
            {
                sum+=nums[i];
            }
        }
        return k;
    }

    public int splitArray(int[] nums, int k) {
        
        int start=0;
        int end=0;

        // if(nums.length()<k)return -1;

        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]>start) start=nums[i];

            end+=nums[i];
        }

        int mid=0;
        while(start<=end)
        {
            mid=(start+end)/2;

            int part=partition(mid,nums);
            if(part > k){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

        return start;

        

    }
}