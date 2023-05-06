//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
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
    Node * addData(Node *head){
        Node* temp=head;
         Node* anshead=NULL;
            Node* anstail=NULL;
            int k=1;
        
        if((temp->data+1)<10){
            temp->data=temp->data+1;
            return temp;
            
        }
        else{
            
           long long int sum=0;
            int digit=0;
           int carry=0;
           
            while(carry!=0||temp!=NULL){
                
                int val=0;
                if(temp){
                    val=temp->data;
                }
                if(k==1){
                     sum=val+1;
                     k++;
                }
                else{
                    sum=carry+val;
                }
              
                digit=sum%10;
                carry=sum/10;
                
                insertAtTail(anshead,anstail,digit);
                if(temp){
                      temp=temp->next;
                }
              
            }
            
        }
       return anshead;
     }
     

    
    Node* reverse(Node * head){
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* rev=reverse(head);
        
        Node* ans=addData(rev);
        
        Node* finalans=reverse(ans);
        
        
        return finalans;
        
        
       
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends