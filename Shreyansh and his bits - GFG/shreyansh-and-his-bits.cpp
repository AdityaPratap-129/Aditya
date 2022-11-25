//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long nCr(int n,int r)
    {
        if(r>n)
        {return 0;}
        long long res=1;
        for(int i=0;i<r;i++)
        {
            res*=(n-i);
            res/=(i+1);
        }
        return res;
    }
    long long count(long long x) {
        // Code Here
        if(x==0)return 0;
        long long num=x,i=0,ans=0,c=0;
        while(num!=0)
        {
            if(num&1==1)
            {
                c++;
                ans+=nCr(i,c);
            }
            i++;
            num>>=1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    
	int t;
	cin >> t;
	while (t-- > 0) {
	    long long x; cin >> x;
	    Solution ob;
	    cout << ob.count(x) << '\n';
	}
	return 0;
}
// } Driver Code Ends