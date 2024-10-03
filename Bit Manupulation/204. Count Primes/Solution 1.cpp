class Solution {
public:

    int isPrime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                return 0;
            }

        }
        return 1;
    }

    int countPrimes(int n) {
        int cnt=1;

        if(n==0 || n==1 || n == 2)
        {
            return 0;
        }

        for(int i=3;i<n;i++)
        {
            cnt+=isPrime(i);
        }
        return cnt;
    }
};