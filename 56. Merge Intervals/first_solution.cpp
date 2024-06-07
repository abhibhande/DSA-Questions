//Time complexity : O(N) + O(NlogN) for sorting
// Space complexity : O(1) as we are not using any additional space

// As you can see i used for and inside while but For runs only one time and while also uses the same i which is used by the for there fore the time complexity is O(N) + O(NlogN) for sorting

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();

        sort(intervals.begin(),intervals.end());

        for(int i=0;i<n;i++)
        {
            int mini=intervals[i][0];
            int maxi=intervals[i][1];
            
            while(i < n && intervals[i][0] <= maxi)
            {
                maxi=max(maxi,intervals[i][1]);
                i++;
            }
            i--;
            ans.push_back({mini,maxi});
        }

        return ans;

    }
};