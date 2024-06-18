class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int pre=0;
        int gap=(arr[0] -1);
        if(gap >= k)return k;

        for(int i=0;i<n-1;i++)
        {
            cout<<gap<<" ";
            pre=gap;

            gap+= (arr[i+1] - arr[i])-1;
            if(gap >= k)return (k-pre)+arr[i];
        }
        cout<<gap<<" ";
        if(k > gap)
            return arr[n-1]+(k-gap);
        return 0;

    }
};