//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string str1="";
        string str2="";
        for(int i=0;i<n;i++)
        {
            if(str[i]>='a')
            {
                str1+=str[i];
            }
            else
            {
                str2+=str[i];
            }
        }
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        int p=0,q=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]>='a')
            {
                str[i]=str1[p];
                p++;
            }
            else
            {
                str[i]=str2[q];
                q++;
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

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
}
// } Driver Code Ends