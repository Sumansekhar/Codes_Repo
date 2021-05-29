/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode *node=NULL;
        if(l1==NULL)
        {return l2;}
        if(l2==NULL)
        {return l1;}
        if(l1->val>=l2->val)
        {
            node=l2;
            node->next=merge(l1,l2->next);
            
        }
        else if(l1->val<l2->val)
        {
            node=l1;
            node->next=merge(l1->next,l2);
        }
        
        
        return node;
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* ans=merge(l1,l2);
        return ans;
    }
};
