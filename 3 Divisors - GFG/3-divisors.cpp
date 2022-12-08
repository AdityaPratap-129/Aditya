//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    bool isPrime(long long k)
    {
        if(k==2)return 1;
        if(k==3)return 1;
        if(k%2==0 || k%3==0)
        {
            return 0;
        }
        for(int i=5;i*i<=k;i=i+6)
        {
            if(k%i==0 || k%(i+2)==0)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
        vector<int> v;
        for(int i=0;i<q;i++)
        {
            int c=0;
            for(long long j=2;j*j<=query[i];j++)
            {
                if(isPrime(j))
                {
                    c++;
                }
            }
            v.push_back(c);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends