class Solution {
public:
    long long rec(vector<vector<int>>& question,int i,int n, vector<long long >&dp){
        if(i==n||i>n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        
        long long incl=question[i][0]+rec(question,i+question[i][1]+1,n,dp);
        long long excl=0+rec(question,i+1,n,dp);
        
        dp[i]=max(incl,excl);
        return dp[i];
    }
    long long mostPoints(vector<vector<int>>& questions) {
       
        int n=questions.size();
         vector<long long >dp(n+1,-1);
       return  rec(questions,0,n,dp);
    }
};