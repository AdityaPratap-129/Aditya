// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int a[], int n){
        
        // Your code here
        int c=0,p=INT_MAX,j=0,t=0;
        for(int i=0;i<n;i++)
        {
            if(p>a[i])
            {
                p=a[i];
                c=i;
            }
        }
        
        
        if(n==2 && a[0]!=a[1])
        {
            return 1;
        }
        
        
        if(c==0 || c==n-1)
        {
            if(c==0)
            {
                for(int i=1;i<n;i++)
                {
                    if(a[i]>a[i-1])
                    {
                        t++;
                    }
                }
            }
            else
            {
                for(int i=n-1;i>0;i--)
                {
                    if(a[i]<a[i-1])
                    {
                        t++;
                    }
                }
            }
            
            if(t==n-1)
            {
                return 0;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==a[i-1])
            {
              j++;
            }
        }
        if(j==n)
        {
            return 0;
        }
                
        int k=checksf(a,c,n,p);
        int y=checksb(a,c,n,p);
        if((k+y)==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    
        
        
        
    }
    
    int checksf(int a[],int c,int n,int p)
    {
        int m=0,q=1;
        if(c+2<=n-1 && a[c+1]<a[c+2])
        {
            for(int i=c+1;i<n-1;i++)
            {
                if(a[i+1]>=a[i] && a[n-1]<=a[0])
                {m++;}
                else
                {q = 0;}
            }
        }
        else if(c+2<=n-1 && a[c+1]>a[c+2])
        {
            for(int i=c+1;i<n-1;i++)
            {
                if(a[i+1]<=a[i] && a[n-1]>=a[0])
                {m++;}
                else
                {q=0;}
            }
        }
        else
        {
            if(c+1==n-1)
            {return q;}
            else
            {
            checksf(a,c+1,n,p);
            }
        }
        return q;
    }
    int checksb(int a[],int c,int n,int p)
    {
        int m=0,q=1;
        if(c-2>=0 && a[c-1]>a[c-2])
        {
            for(int i=c-1;i>0;i--)
            {
                if(a[i-1]<=a[i] && a[n-1]<=a[0])
                m++;
                else
                {q=0;}
            }
        }
        else if(c-2>=0 && a[c-1]<a[c-2] )
        {
            for(int i=c-1;i>0;i--)
            {
                if(a[i-1]>=a[i] && a[n-1]>=a[0])
                {
                    m++;
                }
                else
                {q=0;}
            }
        }
        else
        {
            if(c-1<=0)
            {return q;}
            else
            {
            checksb(a,c-1,n,p);
            }
            
        }
        return q;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	//testcases
	cin>> T;
	
	while (T--){
	    int num;
	    //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        Solution ob;
        
        //function call
        flag = ob.checkRotatedAndSorted(arr, num);
        
        //printing "No" if not sorted and
        //rotated else "Yes"
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}  // } Driver Code Ends