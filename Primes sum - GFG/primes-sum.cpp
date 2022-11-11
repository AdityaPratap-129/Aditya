//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    bool prm(int n)
    {
        if(n==1)return false;
        if(n==2)return true;
        if(n%2==0 || n%3==0)
        {
            return false;
        }
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                return false;
            }
        }
        return true;
    }
    string isSumOfTwo(int n){
        // code here
        for(int i=0;i<n;i++)
        {
            if(prm(i)&& prm(n-i))
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
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends