class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flip=start^goal;

        int cnt=0;

        while(flip > 0)
        {
            cnt++;
            flip=flip & (flip - 1);
        }
        return cnt;
    }
};