
class DisjointSet{
    public:
    vector<int>parent,size;
    
    DisjointSet(int V){
        parent.resize(V+1);
        size.resize(V+1);
        for(int i=0;i<V;i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    
    int findUpar(int x){
        if(x==parent[x]){
            return x;
        }
        return parent[x]=findUpar(parent[x]);
    }
    void UnionBySize(int x,int y){
        int u=findUpar(x);
        int v=findUpar(y);
        if(u==v)return;
        if(size[u]<size[v]){
            parent[u]=v;
            size[v]+=size[u];
        }
        else{
            
            parent[v]=u;
            size[u]+=size[v];
        }     
    }
};
class Solution {
    
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        DisjointSet ds(n);
         int cntExtra=0;
        for(auto it:connections){
            int u=it[0];
            int v=it[1];
           if(ds.findUpar(u)==ds.findUpar(v)){
               cntExtra++;
           }
            else{
                ds.UnionBySize(u,v);
            }
            
        }
        
        int cntcomponents=0;
        for(int i=0;i<n;i++){
            if(i==ds.parent[i]){
                cntcomponents++;
            }
        }
        int ans=cntcomponents-1;
        
        if(cntExtra>=ans){
            return ans;
        }
         return -1;   
      }
};