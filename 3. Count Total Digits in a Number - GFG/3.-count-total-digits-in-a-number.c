// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int countDigits(int n)
{
    
   //Your code here
   if(n>=10)
   {
       int numb = countDigits(n/10);
       int q=numb+1;
       return q;
   }
   else
   {
       return 1;
   }
}

// { Driver Code Starts.

int main() {
	int T;
	
	//taking testcases
	scanf("%d", &T);
	while(T--)
	{
	    int n;
	    
	    //taking number n
	    scanf("%d", &n);
	    
	    //calling countDigits
	    printf("%d\n", countDigits(n));
	    
	    
	}
	return 0;
}
  // } Driver Code Ends