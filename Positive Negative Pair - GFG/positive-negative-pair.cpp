// { Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
#include <unordered_map>
#include <math.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    {
        // code here
        vector<int> h;
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            if(s.find(-arr[i])!=s.end())
            {
                if(arr[i]<0)
                {
                    h.push_back(arr[i]);
                h.push_back(-arr[i]);
                }
                else
                {
                    h.push_back(-arr[i]);
                h.push_back(arr[i]);
                }
            }
            else
            {
                s.insert(arr[i]);
            }
        }
        return h;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        vector <int> res = obj.findPairs(arr, n);
    	if(res.size()!=0)
    	{
    		for (int i : res) 
            	cout << i << " ";
        	cout << endl;	
    	}
    	else
    		cout<<0<<endl;
    }

    return 0;
}  // } Driver Code Ends