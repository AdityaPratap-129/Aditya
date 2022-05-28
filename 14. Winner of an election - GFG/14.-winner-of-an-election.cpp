// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
    
        unordered_map<string,int> h;
        vector<string> s;
        int res=INT_MIN;
        string p;
        int k=0;
        for(int i=0;i<n;i++)
        {
            h[arr[i]]++;
        }
        for(auto i:h)
        {
            
            if(k<i.second )
            {
                k=i.second;
                p=i.first;
            }
            else if(k==i.second && p>i.first)
            {
                p=i.first;
            }
        }
       
        s.push_back(p);
        s.push_back(to_string(k));
        return s; 
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends