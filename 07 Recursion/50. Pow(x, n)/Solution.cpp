class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        if(n==1)
        {
            return x;
        }
        
        if(n>0)
        {  
            if(n%2 == 0)
            {
                double temp=pow(x,n/2);
                return temp * temp;
            }
            else
            {
                return x * pow(x,n-1);
            }
        }
        else
        {
            n += 1;

            return 1/(myPow(x,(0-n)) * x); 
        }
    }
};