// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Quadratic Probing to handle collisions.
    void QuadraticProbing(vector <int>&hash, int m, int arr[], int n)
    {
        //Your code here
        for(int i=0;i<n;i++)
        {
            int p=arr[i]%m;
            if(hash[p]==arr[i] || hash[p]==-1)
            {
                hash[p]=arr[i];
                continue;
            }
            int k=1;
            int j=(p+(k*k))%m;
            while(hash[j]!=-1)
            {
                if(j==p)
                {
                    return;
                }
                else if(arr[i]==hash[j])
                {
                    break;
                }
                else
                {
                    k++;
                    j=(p+(k*k))%m;
                }
            }
            hash[j]=arr[i];
            
        }
    }


};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    
	    int  N;
	    cin>>N;
	    int arr[N];
	    
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    
	    vector<int> hash (hashSize,-1);
	    Solution obj;
	    obj.QuadraticProbing (hash, hashSize, arr, N);
	    
	    for(int i = 0;i < hashSize; i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}


  // } Driver Code Ends