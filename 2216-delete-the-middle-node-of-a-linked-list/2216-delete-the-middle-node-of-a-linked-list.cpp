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
    ListNode* deleteMiddle(ListNode* head) {
 if(head==nullptr ||head->next==nullptr){

        return nullptr;
     }
     ListNode* temp=head;
     int n=0;
     while(temp!=NULL){
        n++;
        temp=temp->next;
     }
     int middleIndex=n/2;
     temp=head;
     while(temp!=NULL){
        middleIndex--;
        if(middleIndex==0){
            temp->next=temp->next->next;
            break;
        }
       temp=temp->next;
     }
     return head;
    }
};