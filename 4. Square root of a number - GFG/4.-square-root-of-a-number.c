// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    // Your code goes here
    long long l=1,h=x,ans;
    while(l<=h)
    {
        long long m=(l+h)/2;
        long long msq=m*m;
        if(msq==x)
        {
            return m;
        }
        else if(msq<x)
        {
            l=m+1;
            ans=m;
        }
        else
        {
            h=m-1;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends