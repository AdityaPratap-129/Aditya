// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *a, int n){
        //code here
        
       if(n == 0)
           return {0, 0};
       
       if(n- (a[n-1]-a[0]+1) == 0)
           return {-1, -1};
           
       int lo= 0;
       int hi= n-1;
       
       while(lo<hi){
           int mid= lo+ (hi-lo)/2;
           
           if(a[mid]>= mid+ a[0])
               lo= mid+1;
           else
               hi= mid;
       }
       
       return {a[lo], n-(a[n-1]-a[0])};  
   
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<int, int> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}  // } Driver Code Ends