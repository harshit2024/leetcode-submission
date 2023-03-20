//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int top=0;
        int left=0;
        int bottom=r-1;
        int right=c-1;
        int total=r*c;
        int count=0;
        
        vector<int>v;
        while(count<total){
            for(int i=left;count<total&&i<=right;i++){
                v.push_back(matrix[top][i]);
                count++;
                
            }
            top++;
              for(int i=top;count<total&&i<=bottom;i++){
                v.push_back(matrix[i][right]);
                 count++;
            }
            right--;
              for(int i=right;count<total&&i>=left;i--){
                v.push_back(matrix[bottom][i]);
                 count++;
            }
            bottom--;
              for(int i=bottom;count<total&&i>=top;i--){
                v.push_back(matrix[i][left]);
                 count++;
            }
            left++;
        }
        
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends