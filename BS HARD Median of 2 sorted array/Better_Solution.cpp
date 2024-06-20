class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        vector<int> v;
        int mid= ceil((double)(n+m)/2);

        if(n+m == 1)
        {
            if(n==1)return (double)nums1[0];
            return (double)nums2[0];
        }

        while(i<n && j<m)
        {
            if(nums1[i] < nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
            }
            else
            {
                v.push_back(nums2[j]);
                j++;
            }
            if(v.size() == mid + 1)
                break;
        }

        if(v.size() < mid + 1)
        {
            while(v.size() < mid + 1 && i < n)
            {
                v.push_back(nums1[i]);
                i++;
            }

            while(v.size() < mid + 1 && j < m)
            {
                v.push_back(nums2[j]);
                j++;
            }
        }
        if(m+n == 2*mid)
            {
                return ((double)(v[v.size()-1]) + (double)(v[v.size()-2]))/2.0;
            }
            return (double)(v[v.size()-2]);
        return 0;
        
    }
};