class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0,high=n-1;
        int gap=arr[n-1] - n;

        if(k < arr[0])return k;

        while(low<=high){
            int mid=(low + high)/2;
            gap=arr[mid] - (mid + 1);

            if(gap < k)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        int missing=k-(arr[high] - (high+1));

        return arr[high] + missing;
    }
};