//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        vector<long long> v(n);
        stack<pair<long long,long long>> st;
        st.push({arr[0],0});
        for(int i=1;i<n;i++)
        {
            while(!st.empty() && arr[i]>st.top().first )
            {
                //int k=st.top();
                
                v[st.top().second]=arr[i];
                st.pop();
                //st.push(arr[i]);
                //i++;
            }
            //if(st.top()!=arr[i])
            st.push({arr[i],i});
            
        }
        while(!st.empty())
        {
            v[st.top().second]=-1;
            st.pop();
        }
        return v;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends