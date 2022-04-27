// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        int mn=nms(arr,num);
        if(mn<0)
        {
            return mn;
        }
        int asum=0;
        for(int i=0;i<num;i++)
        {
            asum=asum+arr[i];
            arr[i]= -arr[i];
        }
        int mc=asum+nms(arr,num);
        return max(mc,mn);
        
    }
    
    int nms(int a[],int n)
    {
        int res=a[0],m=a[0];
        for(int i=1;i<n;i++)
        {
            m=max(m+a[i],a[i]);
            res=max(m,res);
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends