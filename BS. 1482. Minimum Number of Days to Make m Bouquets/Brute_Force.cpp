class Solution {
public:

    int findHigh(vector<int>& bloomDay){
        int maxi=INT_MIN,n=bloomDay.size();
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,bloomDay[i]);
        }
        return maxi;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=1,high=findHigh(bloomDay);
        int n=bloomDay.size();

        for(int i=1;i<=high;i++)
        {
            int mcnt=0,kcnt=0;

            for(int j=0;j<bloomDay.size();j++)
            {
                if(bloomDay[j] <= i)
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
            if(mcnt>= m)return i; 
        }
        return -1;
    }
};