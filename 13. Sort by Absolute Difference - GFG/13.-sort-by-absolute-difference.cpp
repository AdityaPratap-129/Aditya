// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    // A[]: input array
    // N: size of array
    //Function to sort the array according to difference with given number.
    void sortABS(int a[],int n, int k)
   {
      //Your code here
      mergeSort(a,0,n-1,k);
      
      
   }
    void mergeSort(int a[],int l,int r,int k)
    {
        if(r>l)
        {
            int m=l+(r-l)/2;
            mergeSort(a,l,m,k);
            mergeSort(a,m+1,r,k);
            merge(a,l,m,r,k);
        }
    }
    void merge(int a[],int l,int m,int r,int k)
    {
        int n1=m-l+1;
        int n2=r-m;
        int left[n1];
        int right[n2];
        for(int i=0;i<n1;i++)
        left[i]=a[l+i];
        for(int i=0;i<n2;i++)
        right[i]=a[m+i+1];
        int i=0,j=0;
        int v=l;
        while(i<n1 && j<n2)
        {
            if(abs(left[i]-k)<=abs(right[j]-k))
             a[v++]=left[i++];
             else
             a[v++]=right[j++];
        }
        while(i<n1)
        a[v++]=left[i++];
        while(j<n2)
        a[v++]=right[j++];
    }

};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    
	    int N, diff;
	    cin>>N>>diff;
	    int A[N];
	    
	    for(int i = 0; i<N; i++)
	        cin>>A[i];
	   
	    Solution ob;
	   
	    ob.sortABS(A, N, diff);
	    
	    for(int & val : A)
	        cout<<val<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends