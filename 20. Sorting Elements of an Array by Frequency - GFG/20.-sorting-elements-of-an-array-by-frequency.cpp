// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool mycmp(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.second==p2.second)
        {
            return p1.first<p2.first;
        }
        return p1.second>p2.second;
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        unordered_map<int,int> h;
        vector<int> l;
        int p=INT_MAX;
        for(int i=0;i<n;i++)
        {
            h[arr[i]]++;
        }
        vector<pair<int,int>> k(h.begin(),h.end());
        sort(k.begin(),k.end(),mycmp);
        for(auto e:k)
        {
            for(int i=0;i<e.second;i++)
            {
                l.push_back(e.first);
            }
        }
        
        return l;
    }
   

};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends