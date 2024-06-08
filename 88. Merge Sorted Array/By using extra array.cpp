// Time Complexity : O (2(M + N)) One for first time traversing and second for copy purpose
// Space Complexity : O(M + N)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        int len=m+n;
        
        vector<int> ans;

        while(i<m && j<n)
        {
            if(nums1[i] < nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m)
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n)
        {
            ans.push_back(nums2[j]);
            j++;
        }

        for(i=0;i<len;i++)
        {
                nums1[i]=ans[i];
                cout<<ans[i];
        }

    }
};