// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
// Function to find element in sorted array

int leftIndex(int n, int arr[], int x){
    
    // Your code here
    int l=0,h=n-1;
    
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]>x)
        {
            h=m-1;
        }
        else if(arr[m]<x)
        {
            l=m+1;
        }
        else
        {
            if(m==0 || arr[m-1]!=arr[m])
            {
                return m;
            }
            else
            {
                h=m-1;
            }
        }
        
        if(l>h)
        {
            return -1;
        }
        
        
        
    }
    
}




// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    int elemntToSearch;
	    cin >> elemntToSearch;
	    
	    cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
	}
	
	return 0;
}  // } Driver Code Ends