// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int k=0;k<n;k++)
        {
            if(ip(arr,k+1,n-1,0-arr[k]))
            {
                return true;
            }
        }
        return false;
    }
    bool ip(int arr[],int l,int r,int x)
    {
        while(l<r)
        {
            if(arr[r]+arr[l] == x )
            {
                return true;
            }
            else if(arr[r]+arr[l] > x)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends