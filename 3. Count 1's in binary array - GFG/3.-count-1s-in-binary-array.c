// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

// Function to count number of Ones
// arr: input array 
// N: size of input array
int countOnes(int arr[], int N)
{
    int l=0,h=N-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]==1 && arr[m-1]==0)
        {
            return m+1;
        }
        else if(arr[m]==0)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
    }
}

// { Driver Code Starts.

int main(){
    
    int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int *a;
		a = (int*)malloc(n * sizeof(int));
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);

		printf("%d\n", countOnes(a, n) );
	}
	return 0;
	
}
  // } Driver Code Ends