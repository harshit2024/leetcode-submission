//{ Driver Code Starts
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
    Node * rev(Node *head){
         Node * curr=head;
          Node * prev=NULL;
           Node * next=NULL;
           while(curr){
               next=curr->next;
               curr->next=prev;
               prev=curr;
               curr=next;
           }
           return prev;
    }
     Node* getmid(Node * head){
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        
        Node *mid=getmid(head);
        
        Node* curr=rev(mid->next);
        
        while(curr){
            if(head->data==curr->data){
                head=head->next;
                curr=curr->next;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};



//{ Driver Code Starts.
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