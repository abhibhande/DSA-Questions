class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int newBottles=0;
        int count = numBottles;
        int remaining=numBottles;

        while(remaining >= numExchange)
        {
            newBottles = remaining / numExchange;
            count += newBottles;
            remaining = remaining % numExchange;
            remaining += newBottles;
        }
        return count;
    }
};