// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        vector<int> ans;
        map<int,int> mp,mp1;
        for(auto i:A1){
            mp1[i]++;
        }
        
        for(auto i : A2){
            while(mp1[i] > 0){
                ans.push_back(i);
                mp1[i]--;
            }
        }
        for(auto i:ans){
            mp[i]++;
        }
        vector<int> k;
        if(ans.size() < A1.size()){
            for(auto i : A1){
                if(mp[i] > 0){
                    continue;
                }
                else{
                    k.push_back(i);
                }
            }
        }
        sort(k.begin(),k.end());
        for(auto i : k){
            ans.push_back(i);
        }
        
        return ans;
    } 
};

// { Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
  // } Driver Code Ends