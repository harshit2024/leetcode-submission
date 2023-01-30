//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
 vector<int>vis;
 int count=0;
  
    
    bool dfs(vector<int>adj[],int src){
        vis[src]=1;
        bool select=false;
        
      
       for(auto child :adj[src]){
           if(!vis[child] && !dfs(adj,child)){
               select=true;
           }
       }
       if(select==true){
           count++;
       }
       
       return select;
       
    }
    int countVertex(int N, vector<vector<int>>edges){
        // code here 
        vector<int>adj[N+1];
         vis=vector<int>(N+1,0);
        for( auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
            
        }
       
        dfs(adj,1);
        
        return count;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<vector<int>>edges;
        for(int i = 0; i < N-1; i++){
            int x,y;
            cin >> x >> y;
            vector<int> edge;
            edge.push_back(x);
            edge.push_back(y);
            edges.push_back(edge);
        }
        
        Solution ob;
        cout << ob.countVertex(N, edges) << endl;
    }
    return 0; 
} 
// } Driver Code Ends