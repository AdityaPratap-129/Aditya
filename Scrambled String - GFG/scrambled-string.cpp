//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    public:
    map<string,bool> mp;
    bool solve(string a, string b)
    {
        if(a.compare(b)==0)
        {
            return true;
        }
        string key=a+" "+b;
        if(mp.find(key)!=mp.end())
        {
            return mp[key];
        }
        int n=a.length();
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            if(solve(a.substr(0,i),b.substr(0,i))&&solve(a.substr(i,n-i),b.substr(i,n-i)))
            {
                flag=true;
                break;
            }
            if(solve(a.substr(0,i),b.substr(n-i,i))&&solve(a.substr(i,n-i),b.substr(0,n-i)))
            {
                flag=true;
                break;
            }
        }
        mp[key]=flag;
        return flag;
    }
    bool isScramble(string S1, string S2){
        //code here
        return solve(S1,S2);
    }    
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends