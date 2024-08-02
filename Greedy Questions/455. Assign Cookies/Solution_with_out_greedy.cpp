class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int i=0,j=0;
        int n=g.size(),m=s.size();
        int count=0;

        while(n>i && m>j)
        {
            if(g[i] <= s[j])
            {
                count++;
                i++;
            }
           j++;
            
        }
        return count;
    }
};