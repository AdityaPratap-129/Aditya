// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
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
                 return i;
             }
         }
         
     }
     return -1;
}