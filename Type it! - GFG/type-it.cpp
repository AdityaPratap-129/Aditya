//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool chk(string& s, int i, int j){
        int t = j;
        while(i < t){
            if(s[i++] != s[j++]) return false;
        }
        return true;
    }
    int minOperation(string s) {
        // code here
        int n=s.length();
        int p=-1;
        for(int i=0;i<n/2;i++)
        {
            if(chk(s,0,i+1))p=i+1;
        }
        if(p==-1)
        {
            return n;
        }
        return n-p+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends