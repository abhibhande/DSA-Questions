int Solution::solve(vector<int> &A, int B) {
    
    map<int,int> mp;
    
    mp[0]=1;
    
    int XOR=0;
    int cnt=0;
    int n=A.size();
    
    for(int i=0;i<n;i++)
    {
        XOR = XOR ^ A[i];
        auto temp = B ^ XOR ;
        
            cnt+=mp[temp];
            
        mp[XOR]++;
        
    }
    return cnt;
}
