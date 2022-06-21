// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
		Node *r= new Node(x);
	Node *c=head;
	int p=1;
	if(head==NULL)
	{
	    return r;
	}
	
	while(c!=NULL)
	{
	    p++;
	    c = c->next;
	}
	Node *t=head;
	int j=0,k;
	
	if((p%2)==0)
	{
	    p=p/2;
	}
	else
	{
	    p=p/2 ;
	}
	
	for(j=0;j<p-1;j++)
	{
	    t=t->next;
	}
	r->next=t->next;
	t->next=r;
	return head;
}