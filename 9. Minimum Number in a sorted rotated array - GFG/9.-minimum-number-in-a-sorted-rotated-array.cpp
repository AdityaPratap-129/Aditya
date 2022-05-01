// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int a[], int l, int h)
    {
        // Your code here
        int ans=-1;
        if(a[h]<a[h-1])
        {
            return a[h];
        }
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(a[0]<=a[m])
            {
                l=m+1;
            }
            else
            {
                ans=a[m];
                h=m-1;
            }
        }
        if(ans==-1)
        {
            return a[0];
        }
        else
        {
            return ans;
        }
        
        
        
        
    }
    
   
};

// { Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}  // } Driver Code Ends