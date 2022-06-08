// { Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        unordered_map<char,int>h;
        unordered_map<char,int>v;
        string c;
        for(int i=0;i<s1.size();i++)
        {
            h[s1[i]]++;
        }
        for(int i=0;i<s2.size();i++)
        {
            v[s2[i]]++;
        }
        for(int i=0;i<s1.size();i++)
        {
            if(v.find(s1[i])==v.end())
            {
                c+=s1[i];
            }
        }
        for(int i=0;i<s2.size();i++)
        {
            if(h.find(s2[i])==v.end())
            {
                c+=s2[i];
            }
        }
        if(c.size()==0)
        {
            return "-1";
        }
        return c;
        
    }

};

// { Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}
  // } Driver Code Ends