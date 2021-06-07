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
    TreeNode* buildTree(int L,int R,vector<int>& nums)
    {   if(L>R)
         {
        return NULL;}
        int mid=L+(R-L)/2;
     TreeNode *root=new TreeNode();  
     root->val=nums[mid];
      
   
     root->left=buildTree(L,mid-1,nums);
     root->right=buildTree(mid+1,R,nums);
     
     return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int L=0;
        int R=nums.size()-1;
       
        
        return buildTree(L,R,nums);
    }
};
