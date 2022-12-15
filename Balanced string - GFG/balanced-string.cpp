//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int N) {
        // code here
        int rem=N%26;
        int tim=N/26;
        int sumd=0,k=N;
        for(int i=0;i<6;i++)
        {
            sumd+=(k%10);
            k=k/10;
        }
        string str="";
        if(tim>0)
        {
            for(int i=0;i<26;i++)
            {
                str.push_back('a'+i);
            }
        }
        string ans="";
        while(tim--)
        {
            ans+=str;
        }
        if(rem%2==0)
        {
            int p=0,q=25,r1=rem/2,r2=rem/2;
            while(r1--)
            {
                ans+=('a'+p);
                p++;
            }
            string back="";
                while(r2--)
                {
                    back+=('a'+q);
                    q--;
                }
                reverse(back.begin(),back.end());
                ans+=back;
        }
        else
        {
            //int p=0,q=26,r1=(rem+1)/2,r2=(rem-1)/2;
            if(sumd%2==0)
            {
                int p=0,q=25,r1=(rem+1)/2,r2=(rem-1)/2;
                while(r1--)
                {
                    ans+=('a'+p);
                    p++;
                }
                string back="";
                while(r2--)
                {
                    back+=('a'+q);
                    q--;
                }
                reverse(back.begin(),back.end());
                ans+=back;
            }
            else
            {
                
                int p=0,q=25,r1=(rem-1)/2,r2=(rem+1)/2;
                while(r1--)
                {
                    ans+=('a'+p);
                    p++;
                }
                string back="";
                while(r2--)
                {
                    back+=('a'+q);
                    q--;
                }
                reverse(back.begin(),back.end());
                ans+=back;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends