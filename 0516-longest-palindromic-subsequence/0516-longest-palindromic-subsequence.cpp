class Solution {
public:
    
    int lcs(string &s1,string &s2,int m,int n,vector<vector<int>>&dp){
        if(n==0||m==0){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        if(s1[m-1]==s2[n-1]){
            return dp[m][n]=1+lcs(s1,s2,m-1,n-1,dp);
        }
        return dp[m][n]=max(lcs(s1,s2,m,n-1,dp),lcs(s1,s2,m-1,n,dp));
    }
    int longestPalindromeSubseq(string s) {
        string rev=s;
        reverse(rev.begin(),rev.end());
        vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1,-1));
      return   lcs(s,rev,s.size(),rev.size(),dp);
        
    }
};