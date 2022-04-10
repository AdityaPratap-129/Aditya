// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int fibonacci(int n)
{
    //Your code here
    if(n>2)
    {
       int sum=fibonacci(n-1);
       int p=fibonacci(n-2);
       int q=sum+p;
       return q;
    }
    else
    {
        return 1;
    }
}

// { Driver Code Starts.\

int main() {
	int T;
	
	//taking total testcases
	scanf("%d", &T);
	while (T--)
	{
	    int n;
	    //taking number n
	    scanf("%d", &n);
	    
	    //calling fibonacci() function
	    printf("%d\n", fibonacci(n));
	    
	    
	}
	return 0;
}  // } Driver Code Ends