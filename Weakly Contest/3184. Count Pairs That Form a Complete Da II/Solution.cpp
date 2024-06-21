class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        map<int,int> mp;
        int count=0;
        int n=hours.size();

        for(int i=0;i<n;i++)
        {
            int mod=hours[i]%24;
            if(mod != 0)
                count+=mp[24-mod];
            else
                count+=mp[mod];
            mp[mod]++;
        }
        return count;
    }
};