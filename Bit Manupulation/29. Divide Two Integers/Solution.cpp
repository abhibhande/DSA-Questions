class Solution {
public:
    int divide(int dividend, int divisor) {
        bool sign=true;//Positive

        if(dividend == divisor)return 1;

        if(dividend > 0 && divisor < 0)sign = false;
        if(dividend < 0 && divisor > 0)sign = false;

        long long x = abs(dividend);
        long long y = abs(divisor);

        long long ans=0;

        while( x >= y)
        {
            int n = 0;//2 to the power n
            while(x > (((long long)1<<(n + 1)) * y))
            {
                n++;
            }

            x =x - ((1<<(n)) * y);
            ans += (1<<(n));
        }

        if(ans > INT_MIN && sign == false)
        {
            INT_MIN;
        }
        if(ans > INT_MAX && sign == true)
        {
            return INT_MAX;
        }

        if(sign == false)
            ans=ans * (-1);

        return (int)ans;

    }
};