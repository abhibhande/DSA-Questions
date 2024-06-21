// Time Complexity : O(2n) Because we are using two pointers for searching
// Space Complexity : O(1)

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i=0,j=0;
        int n=customers.size();
        int profit=0,total=0;
        int maxi=INT_MIN;
        while(j<n)
        {
            while(j < n && grumpy[j] == 0)
            {
                total+=customers[j];
                j++;
            }
            while(i < j && (j-i)+1 > minutes)
            {
                if(grumpy[i]==1)
                    profit-=customers[i];
                i++;
            }
            
            if(j < n && grumpy[j] == 1)
            {
                profit+=customers[j];
            }
            
            maxi=max(maxi,profit);
            j++;
        }

        return maxi+total;
    }
};