//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
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
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/
 void  insertAtTail(Node* &head,Node* &tail,int data){
      Node *temp=new Node(data);
      if(head==NULL){
          head=temp;
          tail=temp;
      }
      else{
          tail->next=temp;
          tail=temp;
      }
    }

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* anshead=NULL;
    Node* anstail=NULL;
    
    
    while(head1!=NULL && head2!=NULL){
        
   if(head1->data==head2->data){
       
       
       if(anshead==NULL){
           anshead=new Node(head1->data);
           anstail=anshead;
       }
       else{
           Node *temp=new Node(head1->data);
            anstail->next=temp;
             anstail=temp;
       }
       
         head1=head1->next;
          head2=head2->next;
    }
    else if(head1->data < head2->data){
        head1=head1->next;
    }
    else{
        head2=head2->next;
    }
    }
   
   
   return anshead;
    
    
    
}