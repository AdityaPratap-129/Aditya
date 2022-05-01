// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
    long long l=0,h=n-1;
    if(x<=v[0])
    {
        return -1;
    }
    
    if(v[n-1]<x)
    {
        return n-1;
    }
    while(l<=h)
    {
        long long m=(l+h)/2;
        if(v[m]==x || ((v[m-1]<x) && (v[m]>x)) || ((v[m]<x) && (v[m+1]>x)))
        {
            if((v[m-1]<x) && (v[m]>x))
            {
                return m-1;
            }
            else
            {
                return m;
            }
            
        }
        else if(v[m]>x)
        {
            h=m-1;
        }
        else if(v[m]<x)
        {
            l=m+1;
        }
        
        
    }
        
    }
};


// { Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}  // } Driver Code Ends