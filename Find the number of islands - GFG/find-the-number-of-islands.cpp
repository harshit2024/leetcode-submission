//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    
    void dfs(vector<vector<char>>& grid,int i,int j){
        if(i>=grid.size()||i<0||j<0||j>=grid[0].size()){
            return ;
        }
        if(grid[i][j]=='0'||grid[i][j]=='2'){
            return;
        }
        grid[i][j]='2';
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        dfs(grid,i-1,j);
        dfs(grid,i+1,j+1);
        dfs(grid,i+1,j-1);
        dfs(grid,i-1,j+1);
        dfs(grid,i-1,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends