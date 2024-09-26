//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
    void generateStrings(int num,string str,int pre,vector<string>& ans){
        if(str.length() == num)
        {
            ans.push_back(str);
            return;
        }
        
            if(pre == 1)
            {
              generateStrings(num,str + '0',0,ans); 
            }
            else
            {
                generateStrings(num,str + '0',0,ans);
                generateStrings(num,str + '1',1,ans); 
            }
        
    }
    
    vector<string> generateBinaryStrings(int num){
        //Write your code
        vector<string> ans;
        generateStrings(num,"",0,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends