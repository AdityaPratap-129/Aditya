// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        // Your code here
        map<char,int> m;
        int res=0;
        char c='$';
       for(int i=0;i<s.size();i++)
       {
           m[s[i]]++;
       }
       for(auto i:m)
       {
           if(i.second>res)
           {
               res=i.second;
               c=i.first;
           }
       }
       return c;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends