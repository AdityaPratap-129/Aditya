// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      int c=1;
      set<int> h(arr,arr+n);
      int maxs=0;
      for(int i=0;i<n;i++)
      {
          c=1;
          int cur=arr[i];
          if(h.count(cur-1)==0)
          {
              while(h.count(cur+1))
              {
                  c++;
                  cur++;
              }
          }
          maxs=max(c,maxs);
      }
      return maxs;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends