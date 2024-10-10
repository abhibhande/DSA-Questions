class Solution {
public:


    int countPrimes(int n) {
        int cnt=0;
        vector<int> arr(n,1);

        for(int i=2;i<n;i++)
        {
            if(i*i < n)
            {
                int j=i*i;
                cout<<j;
                while(j<n)
                {
                    arr[j]=0;
                    j+=i;
                }
            }
            else
            {
                break;
            }
        }

        for(int i=2;i<n;i++)
        {
            if(arr[i] == 1)
                cnt++;
        }
        return cnt;
    }
};