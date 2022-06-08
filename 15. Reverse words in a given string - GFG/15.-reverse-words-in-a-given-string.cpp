// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int start=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='.')
            {
                reverse(S,start,i-1);
                start=i+1;
            }
        }
        reverse(S,start,S.size()-1);
            reverse(S,0,S.size()-1);
            return S;
    }
    void reverse(string &s, int low,int high)
    {
        while(low<=high)
        {
            swap(s[high],s[low]);
            high--;
            low++;
        }
        
    }
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends