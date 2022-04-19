// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int t=n/k;
        int p=n-(t*k);
        int i=1;
        rvr(arr,k,i,0,0,t);
        int j=1;
        for(i=n-p;i<n-p+p/2;i++)
        {
            swap(arr[i],arr[n-j]);
            j++;
        }
        return;

    }
    
    void rvr(vector<long long>& arr,int k,int i,int r,int u,int t)
    {
        if(u==k*t)
        {
            return;
        }
        if(k%2==0)
        {
            if(i>(k/2))
        {
            u=u+k;
            return rvr(arr,k,1,u,u,t);
        }
        else
        {
            swap(arr[r],arr[u+k-i]);
            return rvr(arr,k,i+1,r+1,u,t);
        }
        }
        else
        {
            if(i>k/2)
        {
            u=u+k;
            return rvr(arr,k,1,u,u,t);
        }
        else
        {
            swap(arr[r],arr[u+k-i]);
            return rvr(arr,k,i+1,r+1,u,t);
        }
        }
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends