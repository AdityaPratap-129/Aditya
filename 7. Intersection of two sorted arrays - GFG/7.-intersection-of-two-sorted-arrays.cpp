// { Driver Code Starts
// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int a1[], int a2[], int n, int m) 
    { 
        //Your code here
        int i=0,j=0,u=1,p=1;
        vector<int> v;
        for(int k=1;k<n;k++)
        {
            if(a1[u-1]!=a1[k])
            {
                a1[u]=a1[k];
                u++;
            }
        }
        for(int k=1;k<m;k++)
        {
            if(a2[p-1]!=a2[k])
            {
                a2[p]=a2[k];
                p++;
            }
        }
        while(i<u && j<p)
        {
            if(a1[i]<a2[j])
            {
                i++;
            }
            else if(a1[i]>a2[j])
            {
                j++;
            }
            else
            {
                v.push_back(a1[i]);
                j++;
                i++;
            }
        }
        
        return v;
    }

};

// { Driver Code Starts.
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        Solution ob;
        // Function calling 
        vector<int> v;
        v = ob.printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 
  // } Driver Code Ends