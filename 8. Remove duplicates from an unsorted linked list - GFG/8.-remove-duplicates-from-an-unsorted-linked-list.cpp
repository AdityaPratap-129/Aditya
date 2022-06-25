// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


 // } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int,int> v;
     Node *last=head;
     while(last->next!=NULL)
     {
          v[last->data]=1;
         last=last->next;
     }
     v[last->data]=1;
     last=head;
     if(v[last->data]==1)
          {
              v[last->data]=0;
          }
     while(last->next!=NULL)
     {
          if(v[last->next->data]==1)
          {
              v[last->next->data]=0;
               last=last->next;
              continue;
          }
          if(v[last->next->data]==0)
          {
              if(last->next->next!=NULL)
              {
                  last->next=last->next->next;
              }
              else
              {
                  last->next=NULL;
              }
              continue;
          }
         last=last->next;
     }
     return head;
    }
};


// { Driver Code Starts.

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}  // } Driver Code Ends