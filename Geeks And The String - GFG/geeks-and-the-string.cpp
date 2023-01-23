//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(!st.empty() && st.top()==s[i])
            {
                st.pop();
                continue;
            }
            else
            {
                st.push(s[i]);
            }
        }
        string s1="";
        while(!st.empty())
        {
            s1+=st.top();
            st.pop();
        }
        if(s1.length()==0)
        {
            return "-1";
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends