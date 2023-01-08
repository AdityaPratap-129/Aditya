//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        map<int,int> h;
        for(int i=0;i<n;i++)
        {
            h[arr[i]%k]++;
        }
        long long c=0;
        for(int i=0;i<n;i++)
        {
            if(h[arr[i]%k]>1)
            {
                c+=h[arr[i]%k]-1;
                h[arr[i]%k]--;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends