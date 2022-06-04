// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size()!=s2.size())
        {
            return 0;
        }
        s1=s1+s1;
        if(strr(s1,s2))
        {
            return 1;
        }
        
        return 0;
        
    }
    bool strr(string s, string x)
{
     //Your code her
     int c=0;
     for(int i=0;i<s.size();i++)
     {
         for(int j=0;j<x.size();j++)
         {
             if(x[j]!=s[i+j])
             {
                 c=0;
                 break;
             }
             else
             {
                 c++;
             }
             if(c==x.size())
             {
                 return 1;
             }
         }
         
     }
     return 0;
}
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends