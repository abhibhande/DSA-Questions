class Solution {
public:

    // vector<int> findHighLow(vector<int>& bloomDay){
        
    //     vector<int> ans={INT_MIN,INT_MAX};

    //     for(int i=0;i<bloomDay.size();i++)
    //     {
    //         ans[1]=max(ans[1],bloomDay[i]);
    //         ans[0]=min(ans[0],bloomDay[i]);
    //     }
    //     return ans;
    // }

    int getDays(vector<int>& bloomDay,int mid,int k){
        int mcnt=0,kcnt=0;

            for(int j=0;j<bloomDay.size();j++)
            {
                if(bloomDay[j] <= mid)
                {
                    kcnt++;
                }
                else
                {
                    kcnt=0;
                }
                if(kcnt == k)
                {
                     mcnt++;
                     kcnt=0;
                }
            }
            return mcnt; 
            // if(mcnt>= m)
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int low=INT_MAX,high=INT_MIN;

        for(int i=0;i<bloomDay.size();i++)
        {
            high=max(high,bloomDay[i]);
            low=min(low,bloomDay[i]);
        }

        int n=bloomDay.size();

        if(((long long)m*(long long)k) > bloomDay.size())return -1;

        while(low<=high)
        {
            int mid=(high + low)/2;

            int mcnt = getDays(bloomDay,mid,k);

            if(mcnt >= m)
                high=mid-1;
            else
                low=mid+1;
        }
        
        return low;
    }
};