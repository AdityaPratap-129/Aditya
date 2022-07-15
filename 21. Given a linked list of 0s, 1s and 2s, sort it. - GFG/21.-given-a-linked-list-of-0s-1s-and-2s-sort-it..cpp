// { Driver Code Starts
#include <bits/stdc++.h>

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

struct Node *start = NULL;


 // } Driver Code Ends
/*
 
  Node is defined as
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
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node *ptr1=new Node(-1);
        Node *ptr2=new Node(-1);
        Node *ptr3=new Node(-1);
        Node *p1=ptr1;
        Node *p2=ptr2;
        Node *p3=ptr3;
        if(head->next==NULL)
        {
            return head;
        }
        while(head!=NULL)
        {
            if(head->data==0)
            {
                p1->next=head;
                p1=p1->next;
            }
            else if(head->data==1)
            {
                p2->next=head;
                p2=p2->next;
            }
            else
            {
                p3->next=head;
                p3=p3->next;
            }
            head=head->next;
        }
        p3->next=NULL;
        p2->next=ptr3->next;
        p1->next=ptr2->next;
        return ptr1->next;
    }
};


// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}  // } Driver Code Ends