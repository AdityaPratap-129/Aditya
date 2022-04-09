// { Driver Code Starts
//Initial Template for C++



#include <iostream>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n)
    {
        int p;
        //Your code here
        if(n>=1)
        {
         
        int sum=sumOfDigits(n/10);
            p=n%10;
        int q =sum+p;
            return q;
        }
        else
        {
            int sum;
            return sum=0;}
        
        
    }
};

// { Driver Code Starts.


int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking input n
	    cin>>n;
	    
	    //calling method sumOfDigits()
	    Solution obj;
	    cout<<obj.sumOfDigits(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends