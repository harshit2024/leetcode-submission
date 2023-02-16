//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:

int dp[1101];

int help(int i,string s,set<string>&worddict){
    if(i==s.size()){
        return 1;
    }
    
    if(dp[i]!=-1){
        return dp[i];
    }
    string temp;
    for(int j=i;j<s.size();j++){
        temp+=s[j];
        if(worddict.find(temp)!=worddict.end()){
            if(help(j+1,s,worddict)){
                return  dp[i]= 1;
            }
        }
    }
    
    return dp[i]=0;
}
    int wordBreak(string A, vector<string> &B) {
        //code here
        memset(dp,-1,sizeof(dp));
        set<string>st;
        for(auto x:B){
            st.insert(x);
        }
        
        return help(0,A,st);
        
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends