class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& a) {
        vector<int> v(2,0);
        int n=a.size();
        int m=a[0].size();

        while(true)
        {
            int i=v[0],j=v[1];

            int ti=-1,tj=-1,maxi=-1;

            if(i-1 >= 0 && a[i][j] < a[i-1][j])
            {
                if(maxi< a[i-1][j])
                {
                    maxi=a[i-1][j];
                    ti=i-1;
                    tj=j;
                }
            }

            if(i+1 < n && a[i][j] < a[i+1][j])
            {
                if(maxi< a[i+1][j])
                {
                    maxi=a[i+1][j];
                    ti=i+1;
                    tj=j;
                }
            }

            if(j-1 >= 0 && a[i][j] < a[i][j-1])
            {
                if(maxi< a[i][j-1])
                {
                    maxi=a[i][j-1];
                    ti=i;
                    tj=j-1;
                }
            }

            if(j+1 < m && a[i][j] < a[i][j+1])
            {
                if(maxi< a[i][j+1])
                {
                    maxi=a[i][j+1];
                    ti=i;
                    tj=j+1;
                }
            }

            if(ti==-1 && tj==-1)
                return v;
            else
            {
                v[0]=ti;
                v[1]=tj;
            }
        }
    }
};