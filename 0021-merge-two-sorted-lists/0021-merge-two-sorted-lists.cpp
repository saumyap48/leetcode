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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
         ListNode *head=new ListNode(0);
        ListNode *tail=head;
        while(head1 && head2){
            if(head1->val<=head2->val){
            tail->next=head1;
            head1=head1->next;
            tail=tail->next;
            tail->next=NULL;
        }
        else{
         tail->next=head2;
            head2=head2->next;
            tail=tail->next;
            tail->next=NULL;
        }
        }
        if(head1)
        tail->next=head1;
        else
        tail->next=head2;
        
        tail=head;
        head=head->next;
        delete tail;
        return head;
    }
};