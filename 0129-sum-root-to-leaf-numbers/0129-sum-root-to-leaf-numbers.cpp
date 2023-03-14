/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
  void rec(TreeNode* root,int temp,int &sum){
      
      if(root==NULL){
          return ;
      }
      temp=temp*10+root->val;
    if(root->left==NULL  && root->right==NULL){
            sum=sum+temp;
        }
        
        rec(root->left,temp,sum);
        rec(root->right,temp,sum);
        
        
        
        
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        
        if(root==NULL){
            return 0;
        }
         rec(root,0,sum);
       
        return sum;
    }
};