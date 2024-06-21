class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        map<long long,long long> mp;
        long long count=0;
        long long n=hours.size();

        for(long long i=0;i<n;i++)
        {
            long long mod=hours[i]%24;
            if(mod != 0)
                count+=mp[24-mod];
            else
                count+=mp[mod];
            mp[mod]++;
        }
        return count;
    }
};