// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
        vector<string> nums={"2","3","5","7"};
       int idx=0;
       string str;
       
       if(n<=4){
           return stoi(nums[n-1]);
       }
       
       for(int i=5; i<=n; i++){
           str=nums[idx]+nums[(i-1)%4];
           nums.push_back(str);
           if(i%4==0){
               idx++;
           }
       }
       return stoi(str);
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}
  // } Driver Code Ends