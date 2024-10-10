class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> s;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(s.empty() || nums[s.top()] > nums[i])
            {
                s.push(i);
            }
        }

        int maxi=0;

        for(int i=n-1;i>=0;i--)
        {
            while((!s.empty()) && nums[s.top()] <= nums[i])
            {
                cout<<i<<" - "<<s.top()<<endl;
                maxi=max(maxi,i-s.top());
                s.pop();
            }
        }
        return maxi;
    }
};