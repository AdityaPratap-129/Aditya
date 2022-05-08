// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> v;
        int i=0,j=0,u=1,p=1;
        for(int k=1;k<n;k++)
        {
            if(arr1[u-1]!=arr1[k])
            {
                arr1[u]=arr1[k];
                u++;
            }
        }
        for(int k=1;k<m;k++)
        {
            if(arr2[p-1]!=arr2[k])
            {
                arr2[p]=arr2[k];
                p++;
            }
        }
        
        
        while(i<u && j<p)
        {
            if(arr1[i]<arr2[j])
            {
                v.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i]==arr2[j])
            {
                v.push_back(arr2[j]);
                i++;
                j++;
            }
            else
            {
                v.push_back(arr2[j]);
                j++;
            }
            
            
        }
        while(i<u)
        {
            v.push_back(arr1[i]);
            i++;
        }
        while(j<p)
        {
            v.push_back(arr2[j]);
            j++;
        }
        return v;
    }
};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends