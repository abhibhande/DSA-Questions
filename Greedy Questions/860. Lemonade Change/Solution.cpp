class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> mp;

        mp[5]=0;
        mp[10]=0;
        mp[15]=0;

        for(int val : bills)
        {
            int bill=val;

            if(bill != 5)
            {
                bill -= 5;
                if(bill > 10 && mp[10] > 0)
                {
                    bill -= 10;
                    mp[10]--;
                }
                while( bill > 0 && mp[5] > 0)
                {
                    bill -= 5;
                    mp[5]--;
                }
                if(bill > 0)
                    return false;

            }
            mp[val]++;
        }

        return true;
    }
};