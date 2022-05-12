// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long long countPairs(int X[], int Y[], int M, int N)
    {
       //Your code here
      sort(X,X+M);
      sort(Y,Y+N);
      long long ans=0;int i=0;
      int one=0,two=0,thr=0,fr=0;
      for(i=0;i<N;i++)
      {
          if(Y[i]==1)
          {one++;}
          else if(Y[i]==2)
          {
              two++;
          }
          else if(Y[i]==3)
          {
              thr++;
          }
          else if(Y[i]==4)
          {
              fr++;
          }
      }
      for(int i=0;i<M;i++)
      {
          if(X[i]==2)
          {
              int index=BS(Y,2,N);
              if(index!=-1)
              {
                  ans=ans+N-index;
              }
              ans=ans+one-thr-fr;
          }
          else if(X[i]>=3)
          {
              int index=BS(Y,X[i],N);
              if(index!=-1)
              {
                  ans=ans+N-index;
              }
              ans=ans+one;
          }
          if(X[i]==3)
          {
              ans=ans+two;
          }
      }
      return ans;
      
    }
    int BS(int Y[],int k,int n)
    {
        int l=0,h=n-1;
        int ind=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(Y[mid]>k)
            {
                ind=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ind;
    }
};


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends