// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int p[256]={0};
        int q[256]={0};
        for(int i=0;i<str1.size();i++)
        {
            p[str1[i]]++;
        }
        for(int i=0;i<str2.size();i++)
        {
            q[str2[i]]++;
        }
        for(int i=0;i<256;i++)
        {
            if(p[i]+q[i]!=0 && p[i]*q[i]==0)
            {
                return false;
            }
        }
        if(str2[0]==str1[str1.size()-2] && str2[1]==str1[str1.size()-1])
        {
            return true;
        }
        
        if(str2[str1.size()-2]==str1[0] && str2[str1.size()-1]==str1[1])
        {
            return true;
        }
        
        return false;

    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends