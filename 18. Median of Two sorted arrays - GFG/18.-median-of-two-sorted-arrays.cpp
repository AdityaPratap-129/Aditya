// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int findMedian(int a[], int n, int b[], int m)
    {
        int begin =0,end=n;
        while(begin<=end)
        {
            int i=(begin+end)/2;
            int j=(n+m+1)/2 - i;
            int min1=(i==n)?INT_MAX:a[i];
            int max1=(i==0)?INT_MIN:a[i-1];
            int min2=(j==m)?INT_MAX:b[j];
            int max2=(j==0)?INT_MAX:b[j-1];
            if(max1<=min2 && max2<=min1)
            {
                if((n+m)%2==0)
                {return (max(max1,max2)+min(min1,min2))/2;}
                else
                {
                    return max(max1,max2);
                }
            }
            else if(max1>min2)
            {
                end=i-1;
            }
            else
            {
                begin=i+1;
            }
        }
        
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;
	    
	}

}  // } Driver Code Ends