// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //  Function to find the gray code of given number n
    int greyConverter(int n)
    {
        if(n==0)
        {return 0;}
        
        // Your code here
        int i,j,p,k,l=0,e,q,w,a;
        j=logs(n);
        k=logs(n);
        p=1<<j;
        for(i=j;i>0;i--)
        {
            l=n&(1<<i);
            q=n&(1<<(i-1));
            if(l>0)
            {
                w=1;
            }
            else
            {
                w=0;
            }
            
            if(q>0)
            {
                a=1;
            }
            else
            {
                a=0;
            }
            
            e=a^w;
            p=p+(e<<(i-1));
            
        }
         
        return p;
        
    }
    
    int logs(int y)
    {
        int r,u;
        for(r=31;r>=0;r--)
        {u=y&(1<<r);
         if(u!=0)
         {
             return r;
         }}
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin >> n;//input n
        Solution ob;
        //calling greyConverter() function
        cout << ob.greyConverter(n) << endl;
    }
}
  // } Driver Code Ends