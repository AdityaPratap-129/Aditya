// { Driver Code Starts
// Initial Template for C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


 // } Driver Code Ends
// User function Template for C

int firstRepeated(int *arr, int n) {
    // code here
    int h[1000001]={0};
    for(int i=0;i<n;i++)
    {
        h[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(h[arr[i]]>=2)
        {
            return i+1;
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
        arr = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        printf("%d\n", firstRepeated(arr, n));
    }
    return 0;
}  // } Driver Code Ends