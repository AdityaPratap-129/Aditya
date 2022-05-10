// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
   bool find3Numbers(int A[], int n, int x)
{
    //Your Code Here
    sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        if(ispair(A,n,i+1,x-A[i]))
        {
            return 1;
        }
    }
    return 0;
}
bool ispair(int arr[],int n,int i,int k)
{
    int l=i,h=n-1;
    while(l<h)
    {
        if(arr[l]+arr[h]==k)
        {
            return 1;
        }
        else if(arr[l]+arr[h]>k)
        {
            h--;
        }
        else
        {
            l++;
        }
    }
    return 0;
}

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends