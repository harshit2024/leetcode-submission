//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    int findtillA(int a){
       if(a%4==0){
           return a;
       } 
       else if(a%4==1)
       {
           return 1;
       }
       else if(a%4==2){
           return a+1;
       }
       else{
           return 0;
       }
    }
    int findXOR(int l, int r) {
        // complete the function here
        return findtillA(r)^findtillA(l-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    }
}
// } Driver Code Ends