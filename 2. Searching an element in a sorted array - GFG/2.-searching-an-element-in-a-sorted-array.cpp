// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
{ 
    
       // Your code here
       int b=bs(arr,N,K,0,N-1);
       return b;
       
}
int bs(int a[], int n, int x, int l, int h)
{
    int m=(h+l)/2;
    if(l>h)
    {
        return -1;
    }
    
    if(a[m]==x )
    {
        return 1;
    }
    else if(a[m]<x)
    {
        bs(a,n,x,m+1,h);
    }
    else
    {
        bs(a,n,x,l,m-1);
    }
    
    
    
    
}

};

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 
  // } Driver Code Ends