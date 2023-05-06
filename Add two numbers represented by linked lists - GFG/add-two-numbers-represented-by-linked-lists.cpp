//{ Driver Code Starts
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
    public:
    //Function to add two numbers represented by linked list.
    void insertAtTail(struct Node* &head,struct Node* &tail,int data){
        struct Node* temp=new Node(data);
        
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
            
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
   struct Node* reverse( struct Node* head){
        struct Node* curr=head;
         struct Node* prev=NULL;
          struct Node* next=NULL;
          while(curr!=NULL){
              next=curr->next;
              curr->next=prev;
              prev=curr;
              curr=next;
          }
          return prev;
          
   }
    struct Node* addBoth(struct Node* first, struct Node* second){
        
      struct Node* anshead=NULL;
     struct Node* anstail=NULL;
     int carry=0;
    
     while(carry!=0 ||first!=NULL ||second!=NULL){
         int val1=0;
         int val2=0;
         if(first){
             val1=first->data;
         }
           if(second){
             val2=second->data;
         }
         
        int  sum=val1+val2+carry;
         
        int digit=sum%10;
        
         insertAtTail(anshead,anstail,digit);
          carry=sum/10;
         
         if(first){
             first=first->next;
         }
         if(second){
             second=second->next;
         }
         
     }
     return anshead;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
         struct Node* firstRev=reverse(first);
         struct Node* secondRev=reverse(second);
         
         
          struct Node* ans=addBoth(firstRev,secondRev);
          
           struct Node* realans=reverse(ans);
           
           return realans;
        
    }
};


//{ Driver Code Starts.

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