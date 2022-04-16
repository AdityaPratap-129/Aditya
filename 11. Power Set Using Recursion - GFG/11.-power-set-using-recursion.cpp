// { Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


//Function to return the lexicographically sorted power-set of the string.
void subst(vector<string> &str, string s, string curr, int i)
{
    if(i==s.length())
    {
        str.push_back(curr);
        return;
    }
    subst(str, s, curr,i+1);
    subst(str,s,curr+s[i],i+1);
    
}

vector <string> powerSet(string s)
{
   //Your code here
   vector<string> str;
   subst(str, s, "", 0);
   return str;
}


// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends