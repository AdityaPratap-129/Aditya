// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    const int CHAR=256;
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.size()!=b.size())
  {
      return false;
  }
  int count[CHAR]={0};
  for(int i=0;i<a.size();i++)
  {
      count[b[i]]++;
      count[a[i]]--;
  }
  for(int i=0;i<CHAR;i++)
  {
      if(count[i]!=0)
      {
          return false;
      }
  }
  return true;
        
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends