//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int logab(int a,int b)
    {
        return log2(b)/log2(a);
    }
    string baseEquiv(int n, int m){
        // code here
        for(int i=2;i<=32;i++)
        {
            int k=logab(i,n);
            if(k+1==m)
            {
                return "Yes";
            }
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        cout<<ob.baseEquiv(n,m)<<endl;
    }
    return 0;
}

// } Driver Code Ends