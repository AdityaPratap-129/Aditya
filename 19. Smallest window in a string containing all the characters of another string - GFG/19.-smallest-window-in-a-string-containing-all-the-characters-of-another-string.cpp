// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        if(s.size()<p.size())
        {return "-1";}
        int a[26]={0};
        int b[26]={0};
        for(int i=0;i<p.size();i++)
        {
            a[s[i]-'a']++;
            b[p[i]-'a']++;
        }
        int i=p.size(),j=0;
        string q="-1";
        int min=INT_MAX;
        while(i<s.size() || j<s.size())
        {
            if(isV(a,b))
            {
                if(min>(i-j))
                {
                    min=i-j;
                    q=s.substr(j,i-j);
                }
                a[s[j]-'a']--;
                j++;
            }
            else if(i<s.size())
            {
                a[s[i]-'a']++;
                i++;
            }
            else
            {
                a[s[j]-'a']--;
                j++;
            }
            
        }
        return q;
        
    }
    bool isV(int a[],int b[])
    {
        for(int i=0;i<26;i++)
        {
            if(b[i]>0)
            {
                if(b[i]>a[i])
                {
                    return false;
                }
            }
            
        }
        return true;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends