// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code her
        int i,j,k,l=0,m,arr[32],a[32],p=0;
        for(k=0;k<=31;k++)
        {arr[k]=0;}
        for(k=0;k<=31;k++)
        {a[k]=NULL;}
        for(i=0;i<=31;i++)
        {arr[i]=N&(1<<i);}
        for(j=0;j<=31;j++)
        {if(arr[j]==0)
         {a[l]=j;
          l++;}}
        for(m=0;m<=31;m++)
        {int u=a[m+1]-a[m];
          if(u>p)
          {p=u;}}
        if(p>a[0])
        {return p-1;}
        else
        {return a[0];}
        
        
        
    }
     
    
     
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends