// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int m, int arr[], int n)
    {
        //Your code here
        vector<int> hss(m,-1);
        
        for(int i=0;i<n;i++)
        {
            if(hss[arr[i]%m]==-1 || hss[arr[i]%m]==arr[i])
            {
                hss[arr[i]%m]=arr[i];
                continue;
                
            }
            int k=1;
            int j=((arr[i]%m)+k)%m;
            while(hss[j]!=-1)
            {
                if(j==arr[i]%m)
                {
                    return hss;
                }
                
                if(hss[j]==arr[i])
                {
                    break;
                }
                else
                {
                    k++;
                    j=((arr[i]%m)+k)%m;
                }
                
            }
            hss[j]=arr[i];
            
                
        }
         return hss;
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
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    Solution obj;
	    hash = obj.linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}

  // } Driver Code Ends