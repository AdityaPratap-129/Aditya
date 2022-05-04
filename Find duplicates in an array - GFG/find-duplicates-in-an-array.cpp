// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        int v[100001]={0};
        vector<int> p;
        int c=0;
        for(int i=0;i<n;i++)
        {
            v[arr[i]]++;
        }
        for(int i=0;i<100001;i++)
        {
            if(v[i]>1)
            {
                p.push_back(i);
                c++;
            }
            
        }
        if(c==0)
        {
            vector<int> u;
            u={-1};
            return u;
        }
        else
        {
            return p;
        }
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends