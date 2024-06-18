class Solution {
public:

    bool possible(vector<int>& position,int m,int dis)
    {
        int count=1,last=position[0],n=position.size();
        for(int i=1;i<n;i++)
        {
            if(position[i]-last >= dis)
            {
                last=position[i];
                count++;
                if(count >=m)return true;
            }
        }
        if(count >=m)return true;
        return false;


    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int low = 1;
        int high = position[position.size() - 1];

        while (low <= high) {
            int mid=(low+high)/2;
            if(possible(position,m,mid) == true)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return high;
    }
};