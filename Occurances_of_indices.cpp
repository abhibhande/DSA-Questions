#include<bits/stdc++.h>
using namespace std;

void printOccurances(vector<int> arr,int i,int n);

string numberToEnglish(int n)
{
    if(n<=0)
    {
        return "";
    }
    int val = n%10;

    if(val == 0)
    {
        return numberToEnglish(n/10) +" ZERO";
    }
    if(val == 1)
    {
        return numberToEnglish(n/10) + " ONE";
    }
    if(val == 2)
    {
        return numberToEnglish(n/10)+ " TWO";
    }
    if(val == 3)
    {
        return numberToEnglish(n/10) + " THREE";
    }
    if(val == 4)
    {
        return numberToEnglish(n/10) + " FOUR";
    }
    if(val == 5)
    {
        return numberToEnglish(n/10) + " FIVE";
    }
    if(val == 6)
    {
        return numberToEnglish(n/10) + " SIX";
    }
    if(val == 7)
    {
        return numberToEnglish(n/10) + " SEVEN";
    }
    if(val == 8)
    {
        return numberToEnglish(n/10) + " EIGHT";
    }
    if(val == 9)
        return numberToEnglish(n/10) + " NINE";

    return "";
}

int strLen(string str,int i)
{
    if(str[i] == '\0')
    {
        return i;
    }
    return strLen(str,i+1);
}

int substringEndSameChracter(string s,vector<int> arr,int n)
// int countSubstrs(string str,int i,int j,int n)
{
    if(n == 0)
    {
        int count=0;
        int len=26;
        for(int i=0;i<len;i++)
        {
            if(arr[i] >= 1)
            {
                count += ((arr[i]*(arr[i]+1))/2);
            }
        }
        return count;
    }
    arr[s[n-1] - 'a']++;
    return substringEndSameChracter(s,arr,n-1);

    // if(n == 1)
    //     return 1;
    
    // if(n <= 0)
    //     return 0;
    
    // int res = countSubstrs(str,i+i,j,n-1) +
    //             countSubstrs(str,i,j-1,n-1) -
    //             countSubstrs(str,i+1,j-1,n-2);
    // if(str[i] == str[j])
    // {
    //     res++;
    // }
    // return res;
}

int main()
{
    // vector<int> arr{3,2,4,5,3,6,7,9,3,4,5,8};  
    // int n=arr.size();
    // printOccurances(arr,0,3);  

    // cout<<numberToEnglish(2019);

    // cout<<strLen("abhishek",0);

    vector<int> arr(26,0);

    cout<<substringEndSameChracter("abcab",arr,5);
    // cout<<countSubstrs("abcab",0,5-1,5);

    return 0;
}

void printOccurances(vector<int> arr,int i,int n)
{
    if(i==arr.size())
    {
        return;
    }
    if(arr[i] == n)
    {
        cout<<i<<" ";
    }

    printOccurances(arr,i+1,n);
}


https://www.youtube.comwatch?v=u-HgzgYe8KA