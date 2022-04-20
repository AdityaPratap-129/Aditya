// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        if(d>n)
        {
            d=d%n;
        }
        else if(d==n)
        {
            return;
        }
        int q=d-1,p=n-1,e=0,i=0,u=n-1,m=d;
        
    while(i<q)
    {
        swap(arr[i],arr[q]);
        i++;
        q--;
    }
    while(m<p)
    {
        swap(arr[m],arr[p]);
        m++;
        p--;
    }
    
     while(e<u)
    {
        swap(arr[e],arr[u]);
        e++;
        u--;
    }
   
    return;
}


    
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends