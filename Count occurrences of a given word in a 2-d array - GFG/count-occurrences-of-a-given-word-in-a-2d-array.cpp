//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int helper(vector<vector<char>>&mat,int i,int j,string target,int index){
        int found=0;
        if(i<mat.size()&&i>=00&&j>=0&&j<mat[0].size()&&mat[i][j]==target[index]){
            mat[i][j]='#';
            if(index==target.size()-1){
                found=1;
            }
            else{
                
                found+=helper(mat,i+1,j,target,index+1);
                found+=helper(mat,i-1,j,target,index+1);
                found+=helper(mat,i,j+1,target,index+1);
                found+=helper(mat,i,j-1,target,index+1);
            }
             mat[i][j]=target[index];
            
        }
        
        return found;
    }
    int findOccurrence(vector<vector<char> > &mat, string target){
        
        int res=0;
         
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                res+=helper(mat,i,j,target,0);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin >> R >> C;
        vector<vector<char> > mat(R);
        for (int i = 0; i < R; i++) {
            mat[i].resize(C);
            for (int j = 0; j < C; j++) cin >> mat[i][j];
        }
        string target;
        cin >> target;
        Solution obj;
        cout<<obj.findOccurrence(mat,target)<<endl;
    }
}

// } Driver Code Ends