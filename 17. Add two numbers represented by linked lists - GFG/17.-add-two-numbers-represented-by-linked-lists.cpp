// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
   //function to reverse LL
   Node* reverseLL(Node* &head){
       Node* curr = head;
       Node* prev = NULL;
       Node* next = NULL;
       while(curr){
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
       }
       return prev;
   }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code her
        Node* head1 = reverseLL(first);
       Node* head2 = reverseLL(second);
       Node* dummy = new Node(-1);
       Node* curr = dummy;
       int carry = 0;
       while(head1 || head2){
           int d = carry;
           if(head1){
               d+=head1->data;
           }
           if(head2){
               d+=head2->data;
           }
           carry = d/10;
           d = d%10;
           Node* temp = new Node(d);
           curr->next = temp;
           curr = temp;
           if(head1) head1 = head1->next;
           if(head2) head2 = head2 -> next;
       }
       if(carry!=0){
           Node* temp = new Node(carry);
           curr->next = temp;
           curr = temp;
       } 
       dummy->next = reverseLL(dummy->next);
       return dummy->next;
   
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends