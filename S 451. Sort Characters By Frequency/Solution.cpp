class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> hash;
        priority_queue<pair<int,char>> q;
        string ans="";

        for(auto ch:s)
        {
           hash[ch]++;

        }

        for(auto val:hash)
        {
            q.push({val.second,val.first});
        }
        while(!q.empty())
        {
            auto val=q.top();
            q.pop();
            for(int i=0;i<val.first;i++)
            {
                ans+=val.second;
            }
        }

        return ans;
    }
};