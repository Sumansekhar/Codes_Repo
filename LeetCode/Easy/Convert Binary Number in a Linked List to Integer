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
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        long long int ans=0;
        long long int p=1;
        reverse(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i]*p;
            p=p*2;
        }
        return ans;
        
    }
};
