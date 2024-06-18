class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int ans=0,maxi=0;
        int n=worker.size();
        int m=difficulty.size();

        for(int i=0;i<n;i++)
        {
            maxi=0;
            for(int j=0;j<m;j++)
            {
                if(worker[i] >= difficulty[j])
                {
                    maxi=max(maxi,profit[j]);
                }
            }
            ans+=maxi;
        }
        return ans;
    }
};