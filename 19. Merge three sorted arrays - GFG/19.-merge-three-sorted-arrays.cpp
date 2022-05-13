// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

 // } Driver Code Ends
class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code here
        int n=A.size(),m=B.size(),p=C.size();
        vector<int> v;
        int  i=0,j=0,k=0;
        while(i<n && j<m && k<p)
        {
            int c=min(A[i],B[j]);
            int q=min(c,C[k]);
            if(q==A[i])
            {
                v.push_back(q);
                i++;
            }
            else if(q==B[j])
            {
                v.push_back(q);
                j++;
            }
            else
            {
                v.push_back(q);
                k++;
            }
        }
        if(i<n && j<m)
        {
            while(i<n && j<m)
            {
                if(A[i]<B[j])
                {
                    v.push_back(A[i]);
                    i++;
                }
                else
                {
                    v.push_back(B[j]);
                    j++;
                }
                
            }
        }
        if(i<n && k<p)
        {
            while(i<n && k<p)
            {
                if(A[i]<C[k])
                {
                    v.push_back(A[i]);
                    i++;
                }
                else
                {
                    v.push_back(C[k]);
                    k++;
                }
                
            }
        }
        if(k<p && j<m)
        {
            while(k<p && j<m)
            {
                if(C[k]<B[j])
                {
                    v.push_back(C[k]);
                    k++;
                }
                else
                {
                    v.push_back(B[j]);
                    j++;
                }
                
            }
        }
        while(i<n)
        {
            v.push_back(A[i]);
            i++;
        }
        while(j<m)
        {
            v.push_back(B[j]);
            j++;
        }
        while(k<p)
        {
            v.push_back(C[k]);
            k++;
        }
        return v;
        
    } 

};

// { Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 
  // } Driver Code Ends