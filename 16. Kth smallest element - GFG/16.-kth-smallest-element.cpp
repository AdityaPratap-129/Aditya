// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
       
        int l=0,r=n-1;
        while(true)
        {
            
             int p=part(arr,l,r);
            if(p==(k-1))
            {
                return arr[p];
            }
            else if(p<(k-1))
            {
                l=p+1;
            }
            else
            {
               r=p-1; 
            }
        }
    }
    int part(int arr[],int low,int high){
       int pivot=arr[high];
       int i=low-1;
       for(int j=low;j<=high;j++){
           if(arr[j]<pivot){
               i++;
               swap(arr[i],arr[j]);
           }
       }
       swap(arr[i+1],arr[high]);
       return i+1;
   }
    
    
};


// { Driver Code Starts.
int main(){
	
	int t;
	cin >> t;
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    
	    for(int i = 0; i<n; ++i)
	        cin>>arr[i];
	        
	    Solution ob;
	    cout << ob.kthSmallest(arr, n, k) << endl;
	    
	}
	return 0;
}  // } Driver Code Ends