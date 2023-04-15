//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        int x=A-B;
        int y=B-C;
        if((x>0&&y>0)||(x<0&&y<0)){
            return B;
        }
        else if(x>0&&y<0){
            if(x>-y){
                return C;
            }
            else{
                return A;
            }
        }
        else if(x<0&&y>0){
              if(-x<y){
                return A;
              }
            else{
                return C;
              }
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}
// } Driver Code Ends