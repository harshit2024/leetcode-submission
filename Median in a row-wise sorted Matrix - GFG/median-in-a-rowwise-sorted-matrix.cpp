//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here
        map<int,int>mp;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                mp[matrix[i][j]]++;
            }
        }
        vector<int >v;
        for(auto x:mp){
            
            for(int i=0;i<x.second;i++){
              v.push_back(x.first);
              
            }
            
            
        }
        int n=v.size()/2;
        return v[n];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends