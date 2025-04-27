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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* start=head;
        for(int i=1; i<k; i++){
            start=start->next;
        }
        ListNode* end=head;
        ListNode* fast=start->next;
        while(fast!=NULL){
            end=end->next;
            fast=fast->next;
        }
        swap(start->val,end->val);
        return head;
    }
};