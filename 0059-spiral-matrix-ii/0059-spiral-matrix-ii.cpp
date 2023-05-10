class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int>ans;
        vector<vector<int>>matrix(n, vector<int>(n,1));
        int count=1;
      
    
        int startingrow=0;
        int endingrow=n-1;
        int startingcol=0;
        int endingcol=n-1;
        int total=n*n;
        while(startingrow<=endingrow&& startingcol<=endingcol){
            for(int i=startingcol;i<=endingcol;i++){
                matrix[startingrow][i]=count;
                count++;
            }
            startingrow++;
            for(int i=startingrow;i<=endingrow;i++){
                matrix[i][endingcol]=count;
                count++;
            }
            endingcol--;
            for(int i=endingcol;i>=startingcol;i--){
                matrix[endingrow][i]=count;
                count++;
            }
            endingrow--;
            for(int i=endingrow;i>=startingrow;i--){
               matrix[i][startingcol]=count;
                count++;
            }
            startingcol++;
            
        }
        return matrix; 
    }
};