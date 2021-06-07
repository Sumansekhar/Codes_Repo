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
    void inorder(TreeNode* p,TreeNode* q)
    {
     if(p==NULL and q==NULL)
     {return;}
        if(p==NULL or q==NULL)
        { flag=false;
            return;}
        inorder(p->left,q->left);
        if(p->val!=q->val)
        {
            flag=false;
            return;
        }
        inorder(p->right,q->right);
        
        
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        inorder(p,q);
        return flag;
        
    }
};
