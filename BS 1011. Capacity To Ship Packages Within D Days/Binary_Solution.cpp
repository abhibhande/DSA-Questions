class Solution {
public:

    bool findCount(vector<int>& weights,int mid,int days){

        int sum=0,n=weights.size();
        int day=0;
        for(int i=0;i<n;i++){
            
            if((sum+weights[i]) > mid)
            {   
                sum = weights[i];
                day++;
            }
            else
            {
                sum += weights[i];
            }
        }
        day++;

        if(days >= day)return true;
        return false;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int high=0;
        int low=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            low=max(low,weights[i]);
            high+=weights[i];
        }

        while(low<=high)
        {
            int mid=(low+high)/2;
            bool result= findCount(weights,mid,days);
            if(result)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return low;
    }
};