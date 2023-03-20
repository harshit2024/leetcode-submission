class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo=0;
        int r=matrix.size();
        int c=matrix[0].size();
        
            
        int hi=r*c-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(matrix[mid/c][mid%c]==target){
                return true;
            }
            else if(matrix[mid/c][mid%c]>target){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return false;
    }
};