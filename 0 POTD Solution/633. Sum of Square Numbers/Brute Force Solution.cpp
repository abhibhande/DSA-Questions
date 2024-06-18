class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=1;i<c;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(((i*i)+(j*j)) == c)
                    return true;
                else if(((i*i) + (j*j)) > c)
                    break;
            }
            if(i*i > c)break;
        }
        return false;
    }
};