// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for C

// arr[]: input array
// N: size of array
// x: element to find index
//Function to find index of element x in the array if it is present.
int closer(int arr[], int N, int x) {
    
    //Your code here
    int l=0,h=N-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]==x)
        {
            return m;
            
        }
        else if(arr[m]>x)
        {
            if(arr[m+1]==x)
            {
                return m+1;
            }
            
            h=m-1;
        }
        else
        {
            if(arr[m-1]==x)
            {
                return m-1;
            }
            
            l=m+1;
        }
    }
    return -1;
    
}

// { Driver Code Starts.


int main() {

    int t;
	scanf("%d", &t);

	while (t--) {
		int n;
		scanf("%d", &n);
		int *arr;
		arr = (int*)malloc(n * sizeof(int));
		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		int x;
		scanf("%d", &x);
		printf("%d\n", closer(arr, n, x) );
	}
	return 0;

}  // } Driver Code Ends