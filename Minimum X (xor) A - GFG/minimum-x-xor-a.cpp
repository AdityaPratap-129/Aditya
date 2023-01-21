//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int p=a;
        int x=0,n=0;
        for(int i=0;i<32;i++)
        {
            if((b&(1<<i))!=0)
            {
                n++;
            }
            //b=b/2;
        }
        //cout<<n<<" "<<endl;
        for(int i=31;i>=0 && n>0;i--)
        {
            if((a&(1<<i))!=0)
            {
                x+=(1<<i);
                n--;
                a^(1<<i);
            }
            if(n==0)
            {
                //break;
            }
        }
        int j=0;
        while(n!=0)
        {
            if((x&(1<<j))!=0)
            {
                j++;
                continue;
            }
            x|=(1<<j);
            n--;
            j++;
        }
        return x;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends