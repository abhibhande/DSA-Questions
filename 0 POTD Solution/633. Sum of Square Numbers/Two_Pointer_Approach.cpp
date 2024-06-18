class Solution {
public:
    bool judgeSquareSum(int c) {

        

        long long sq=sqrt(c);

        //For 0,1,2
        if(c<=2)return true;

        //This is for Complete square As (0*0)+(2*2)=4
        if(sq*sq == c)return true;

        int i=1,j=sq+1;

        while(i<=j)
        {
            sq=((long long)i*(long long)i)+((long long)j*(long long)j);
            if(sq == c)return true;

            if(sq > c)
                j--;
            else i++;
        }
        
        return false;
    }
};