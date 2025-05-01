/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
             unordered_set<ListNode*>node_set;
         while(headA!=NULL){
            node_set.insert(headA);
            headA=headA->next;
         }
         while(headB!=NULL){
            if(node_set.find(headB)!=node_set.end()){
                return headB;
            }
            headB=headB->next;
         }
         return NULL;
    }
};