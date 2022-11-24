//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int ceilIdx(int ta[],int l,int r,int x)
	{
	    while(r>l)
	    {
	        int m=l+(r-l)/2;
	        if(ta[m]>=x)
	        {
	            r=m;
	        }
	        else
	        {
	            l=m+1;
	        }
	        
	    }
	    return r;
	}
	int LongestBitonicSequence(vector<int>arr)
	{
	    // code here
	    int n=arr.size();
	    int tail[n]={0},len=1;
	    int dpf[n]={1},dpd[n]={1};
	    tail[0]=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]>tail[len-1])
	        {
	            tail[len]=arr[i];
	            len++;
	            dpf[i]=len;
	        }
	        else
	        {
	            int c=ceilIdx(tail,0,len-1,arr[i]);
	            tail[c]=arr[i];
	            dpf[i]=dpf[c];
	        }
	    }
	    len=1;
	    int tai[n]={0},j=0;
	    tai[0]=arr[n-1];
	    for(int i=n-1;i>=0;i--)
	    {
	        if(arr[i]>tai[len-1])
	        {
	            tai[len]=arr[i];
	            len++;
	            dpd[i]=len;
	        }
	        else
	        {
	            int c=ceilIdx(tai,0,len-1,arr[i]);
	            tai[c]=arr[i];
	            dpd[i]=c+1;
	        }
	    }
	    int res=0;
	    for(int i=0;i<n;i++)
	    {
	        res=max(res,dpf[i]+dpd[i]-1);
	        //cout<<dpd[i]<<" ";
	        
	    }
	    return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends