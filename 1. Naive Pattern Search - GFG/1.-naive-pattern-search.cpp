// { Driver Code Starts
// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
        int c=0;
        for(int i=0;i<txt.size();i++)
        {
            for(int j=0;j<pat.size();j++)
            {
                if(pat[j]==txt[i])
                {
                    c++;
                    i++;
                }
                else
                {
                    break;
                }
            }
            if(c==pat.size())
            {
                return 1;
            }
            else
            {
                i=i-c;
                c=0;
            }
        }
        return 0;
    }
};


// { Driver Code Starts.

// Driver Code 
int main() 
{ 
	
	int t;
	cin >> t;
	
	while(t--){
	    string s, p;
	    cin >> s >> p;
	    Solution obj;
	    if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}
  // } Driver Code Ends