//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    int sum=0;
	    int res=0;
	    vector<int> v;
	    vector<int> ans;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=0)
	        {
	            res=res+a[i];
	            v.push_back(a[i]);
	        }
	        else
	        {
	            if(sum<=res)
	            {   
	                ans.clear();
	                ans=v;
	            }
	            sum=max(sum,res);
	            res=0;
	            v.clear();
	        }
	    }
	    if(sum<=res )
	    {   
	       ans.clear();
	       ans=v;
	       v.clear();
	    }
	    if(ans.size()==0)
	    {
	       v.push_back(-1);
	       return v;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends