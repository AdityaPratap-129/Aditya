// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        // Your code here
        int res=INT_MAX,p=0,i=0;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>=arr[i+1])
            {
                p=arr[i]-arr[i+1];
            }
            else 
            {
                p=arr[i+1]-arr[i];
            }
            
            if(p<=res)
            {
                res=p;
            }
        }
            if(arr[n-1]>=arr[0])
            {
                p=arr[n-1]-arr[0];
            }
            else 
            {
                p=arr[0]-arr[n-1];
            }
            
            if(p<=res)
            {
                res=p;
            }
        return res;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends