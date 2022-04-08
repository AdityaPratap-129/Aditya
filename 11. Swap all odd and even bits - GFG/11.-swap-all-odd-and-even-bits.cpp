// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here`
    	int i,a[2],p=0,w=0,q=0;
    	for(i=31;i>=0;i=i-2)
    	{
    	    a[0]=n&(1<<i);
    	    a[1]=n&(1<<(i-1));
    	    if(a[0]==0)
    	    {q=0;}
    	    else
    	    {q=1;}
    	    if(a[1]==0)
    	    {w=0;}
    	    else
    	    {w=1;}
    	    
    	    p=p+(w<<(i))+(q<<(i-1));
    	    
    	}
    	return p;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends