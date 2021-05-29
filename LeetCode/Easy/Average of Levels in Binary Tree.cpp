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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<double> ans;
        while(!q.empty())
        {
            int size=q.size();
            long long int a=0;
            long long int b=size;
            while(size--)
            {
                TreeNode* temp=q.front();
                q.pop();
                int x=temp->val;
                a+=x;
               if(temp->right!=NULL) q.push(temp->right);
                if(temp->left!=NULL) q.push(temp->left);
                
                
            }
            if(b!=0)
            {double avg=(double)a/(double)b;
            ans.push_back(avg);}
            
        }
        return ans;
    }
};
