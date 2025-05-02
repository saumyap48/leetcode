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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
     int count=0;
     while(temp!=NULL){
       count++;
       temp=temp->next;
     }
     int midposition=(count)/2+1;
     temp=head;
     while(temp!=NULL){
         midposition--;
        if(midposition==0)
        break;
        temp=temp->next;
     }
     return temp;
    }
};