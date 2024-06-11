//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long merge(long long arr[],long long min,long long mid,long long max)
    {
        long long i=min;
        long long j=mid+1;
        vector<long long> temp;
        long long cnt=0;
        
        while(i<=mid && j<=max)
        {
            if(arr[i] > arr[j])
            {
                cnt += mid -i + 1;
                temp.push_back(arr[j]);
                j++;
            }
            else
            {
                temp.push_back(arr[i]);
                i++;
            }
        }
        
        while(i<=mid)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=max)
        {
            temp.push_back(arr[j]);
            j++;
        }
        
        i=min;
        
        for(auto val : temp)
        {
            arr[i]=val;
            i++;
        }
        
        return cnt;
    }
    
    long long mergeSort(long long arr[], long long min, long long max)
    {
        long long cnt=0;
        if(min==max)return cnt;
        long long mid= (min + max)/2;
        
        cnt += mergeSort(arr,min,mid);
        cnt += mergeSort(arr,mid + 1,max);
        cnt += merge(arr,min,mid,max);
        return cnt;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergeSort(arr,0,N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends