// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int a[], int n, int k) 
    {
        int mx=0,sum=0,res=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            mx=max(mx,a[i]);
        }
        int low=mx,high=sum;
        while(low<=high)
        {
            int m=(low+high)/2;
            if(isf(a,n,k,m))
            {
                res=m;
                high=m-1;
            }
            else
            {
                low=m+1;
            }
        }
        return res;
    }
    
    bool isf(int a[], int n, int k, int ans)
    {
        int req=1,sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+a[i]>ans)
            {
                req++;
                sum=a[i];
            }
            else
            {
                sum =sum+a[i];
            }
        }
        return (req<=k);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends