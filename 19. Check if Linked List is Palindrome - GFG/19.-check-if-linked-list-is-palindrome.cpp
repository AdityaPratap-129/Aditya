// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




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

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* revr(Node* p)
    {
        if(p->next==NULL)
        {
            return p;
        }
        Node *c=p;
        Node *s=NULL;
        while(c!=NULL)
        {
            Node *n=c->next;
            c->next=s;
            s=c;
            c=n;
        }
        return s;
    }
    bool isPalindrome(Node *head)
    {
        if(head->next == NULL)
            return true;
        //Your code hereNode
        Node *slow=head;
        Node *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        Node *t=slow->next;
        Node *rev=revr(slow->next);
        Node *cur=head;
        
        while(rev!=NULL)
        {
            if(cur->data!=rev->data)
            {
                return 0;
            }
            rev=rev->next;
            cur=cur->next;
        }
        t=slow->next;
        slow->next=revr(t);
        return 1;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends