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
    bool flag=true;
public:
    void check(TreeNode *p , TreeNode *q)
    {
        if(p==NULL and q==NULL)
        {return;}
        if(p==NULL or q==NULL)
        {
            flag=false;
            return;
        }
        check(p->left,q->right);
         if(p->val!=q->val)
        {
           flag=false;
            return;
        }
        check(p->right,q->left);
       
        
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {return true;}
        check(root->left,root->right);
        return flag;
        
        
    }
};
