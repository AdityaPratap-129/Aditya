// { Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int a[], int n) 
    { 
        //Your code here
        int res=0,r=0,l=0,h=n-1;
        if(n==2)
        {
            return 0;
        }
        while(l<h)
        {
            if(a[l]<=a[h])
            {
                r=(h-l-1)*a[l];
                l++;
            }
            else
            {
                r=(h-l-1)*a[h];
                h--;
            }
            res=max(res,r);
        }
        return res;
    } 
};



// { Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        Solution ob;
        cout<<(ob.maxWater(height, n))<<endl;
    }

	 
} 

  // } Driver Code Ends