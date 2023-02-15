//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  int dp[105][105];
  int rec(string s,string t,int i,int j){
      
      if(i==s.length()){
          return t.length()-j;
      }
      if(j==t.length()){
          return s.length()-i;
      }
      
      if(dp[i][j]!=-1){
          return dp[i][j];
      }
      int ans;
      if(s[i]==t[j]){
          ans=rec(s,t,i+1,j+1);
      }
      else{
          int insertans=1+rec(s,t,i,j+1);
          int deleteans=1+rec(s,t,i+1,j);
          int replaceans=1+rec(s,t,i+1,j+1);
          
          ans=min(insertans,min(deleteans,replaceans));
      }
      dp[i][j]=ans;
      return dp[i][j];
  }
    int editDistance(string s, string t) {
        // Code here
        memset(dp,-1,sizeof(dp));
        return rec(s,t,0,0);
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends