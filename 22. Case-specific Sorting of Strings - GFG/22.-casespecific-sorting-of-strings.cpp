// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char> h;
        vector<char> v;
        for(int i=0;i<n;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                h.push_back(str[i]);
            }
            if(str[i]>='A' && str[i]<='Z')
            {
                v.push_back(str[i]);
            }
        }
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        int p=0,q=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=h[p];
                p++;
            }
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i]=v[q];
                q++;
            }
        }
        return str;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends