//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
       int findzero(int x){
           int denom=5;
           int zeros=0;
           while(x>=denom)
           {
               zeros+=(x/denom);
               denom*=5;
           }
           return zeros;
       }
        int findNum(int n)
        {
        //complete the function here
           int low=0;
           int high=5*n;
           int ans=low;
           while(low<=high){
               int mid=(low+high)/2;
               int zeroes=findzero(mid);
               if(zeroes>=n){
                   ans=mid;
                   high=mid-1;
               }
               else{
                   low=mid+1;
               }
           }
           return ans;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends