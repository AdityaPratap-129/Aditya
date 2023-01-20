//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      map<int,int>mp;
      for(int i=0;i<N;i++)
      {
          if(Edge[i]>=0)
          {
              mp[Edge[i]]+=i;
          }
      }
      int maxi=0,ans=0;
      for(auto i:mp)
      {
          if(maxi<=i.second)
          {
              maxi=i.second;
              ans=i.first;
          }
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends