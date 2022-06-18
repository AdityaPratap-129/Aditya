// { Driver Code Starts
//Initial Template for C++

/* Following program is a C implementation of 
Rabin Karp. Algorithm given in the CLRS book */
#include<bits/stdc++.h>

using namespace std;

bool search(string, string, int);


 // } Driver Code Ends
//User function Template for C++

// d is the number of characters in the input alphabet 

//Function to check if the pattern is present in string or not.
bool search(string pat, string txt, int q) 
{ 
	// Your code here
	int h=1,d=10;
	for(int i=0;i<pat.size()-1;i++)
	{
	    h=(h*d)%q;
	}
	int p=0,t=0;
	for(int i=0;i<pat.size();i++)
	{
	    p=(p*d + pat[i])%q;
	    t=(t*d + txt[i])%q;
	}
	for(int i=0;i<=txt.size()-pat.size();i++)
	{
	    if(p==t)
	    {
	        bool flag=true;
	        for(int j=0;j<pat.size();j++)
	        {
	            if(txt[i+j]!=pat[j])
	            {
	                flag=false;
	                break;
	            }
	        }
	        if(flag==true)
	        {
	            return 1;
	        }
	    }
	    if(i<txt.size()-pat.size())
	    {
	        t=(d*(t-txt[i]*h)+txt[i+pat.size()])%q;
	        if(t<0)
	        {
	            t=t+q;
	        }
	    }
	}
	
} 

// { Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
    int t;
    cin >> t;
    
    while(t--){
	    string s, p;
	    cin >> s >> p;
	    int q = 101; // A prime number 
	    if(search(p, s, q)) cout << "Yes" << endl;
	    else cout << "No" << endl;
    }
	return 0; 
} 
  // } Driver Code Ends