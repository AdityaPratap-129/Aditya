//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* inputList(int size)
{
    if (size == 0) return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}


// } Driver Code Ends
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        Node *fast=head1;
        Node *slow=head2;
        int s=0,f=0;
        while(slow!=NULL)
        {
            s++;
            slow=slow->next;
        }
        while(fast!=NULL)
        {
            f++;
            fast=fast->next;
        }
        fast=head1;
        slow=head2;
        if(s>=f)
        {
            int n=s-f;
            int k=s-n;
            while(n!=0)
            {
                slow=slow->next;
                n--;
            }
            while(k!=0)
            {
                if(slow==fast)
                {
                    return slow->data;
                }
                slow=slow->next;
                fast=fast->next;
                k--;
            }
            return -1;
        }
        else
        {
            int n=f-s;
            int k=f-n;
            while(n!=0)
            {
                fast=fast->next;
                n--;
            }
            while(k!=0)
            {
                 if(slow==fast)
                {
                    return slow->data;
                }
                slow=slow->next;
                fast=fast->next;
            }
            return -1;
        }
    }
};



//{ Driver Code Starts.


/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;
        
        Solution ob;
        cout << ob.intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends