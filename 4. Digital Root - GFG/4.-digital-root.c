// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int digitalRoot(int n)
{
    //Your code here
    int k=sums(n);
    if(k>=10)
    {
        int i=digitalRoot(k);
        return i;
    }
    else
    {
        return k;
    }
        //Your code here
        
}

int sums(int n)
{
    int p;
    if(n>=1)
        {
         
        int sum=sums(n/10);
            p=n%10;
        int q =sum+p;
            return q;
        }
        else
        {
            int sum;
            return sum=0;}
}

// { Driver Code Starts.


int main() {
	int T;
	scanf("%d", &T);//taking testcases
	while(T--)
	{
	    int n;
	    scanf("%d", &n);//taking number n
	    
	    //calling digitalRoot() function
	    printf("%d\n", digitalRoot(n));
	    
	    
	}
	return 0;
}  // } Driver Code Ends