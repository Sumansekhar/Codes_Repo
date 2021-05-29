/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int ans;
    void dfs(Node *node,int level)
    { 
        
        if(node==NULL)
        {return;}
        ans=max(ans,level);
        for(int i=0;i<node->children.size();i++)
        {
            dfs(node->children[i],level+1);
        }
        
    }
    
    
    
    int maxDepth(Node* root) {
      ans=0;
        if(root==NULL)
        {return ans;}
        
        dfs(root,0);
       return ans+1;
    }
  
};
