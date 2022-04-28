// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int n)
{
        
    // your code here
    int c=1,r=0;
    for(int i=1;i<n;i++)
    {
        if(a[r]==a[i])
        {
            c++;
        }
        else
        {
            c--;
        }
        
        if(c==0)
        {
            r=i;
            c=1;
        }
    }
    c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[r])
        {
            c++;
        }
    }
    
    if(c>n/2)
    {
        return a[r];
    }
    else
    {
        return -1;
    }
        
}

// { Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
  // } Driver Code Ends