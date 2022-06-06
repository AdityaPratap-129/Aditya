// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
    string p;
    unordered_map<char,string> h;
    h.insert({'a',"2"});
    h.insert({'b',"2"});
    h.insert({'c',"2"});
    h.insert({'d',"3"});
    h.insert({'e',"3"});
    h.insert({'f',"3"});
    h.insert({'g',"4"});
    h.insert({'h',"4"});
    h.insert({'i',"4"});
    h.insert({'j',"5"});
    h.insert({'k',"5"});
    h.insert({'l',"5"});
    h.insert({'m',"6"});
    h.insert({'n',"6"});
    h.insert({'o',"6"});
    h.insert({'p',"7"});
    h.insert({'q',"7"});
    h.insert({'r',"7"});
    h.insert({'s',"7"});
    h.insert({'t',"8"});
    h.insert({'u',"8"});
    h.insert({'v',"8"});
    h.insert({'w',"9"});
    h.insert({'x',"9"});
    h.insert({'y',"9"});
    h.insert({'z',"9"});
    for(int i=0;i<s.size();i++)
    {
        p=p+h[s[i]];
    }

    return p;
}
