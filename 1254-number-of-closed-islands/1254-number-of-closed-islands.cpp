class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j){
        if(i>=grid.size()||i<0||j<0||j>=grid[0].size()||grid[i][j]!=0){
            return ;
        }
        grid[i][j]=2;
        dfs(grid,i+1,j);
         dfs(grid,i,j+1);
         dfs(grid,i-1,j);
         dfs(grid,i,j-1);
        
    }
    int closedIsland(vector<vector<int>>& grid) {
        int count=0;
        int r=grid.size();
        int c=grid[0].size();;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if((i==0||j==0||i==r-1||j==c-1)&&grid[i][j]==0)
                {
                    dfs(grid,i,j);
                }            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==0)
                {
                    dfs(grid,i,j);
                    count++;
                }          
            }
        }
        return count;
    }
};