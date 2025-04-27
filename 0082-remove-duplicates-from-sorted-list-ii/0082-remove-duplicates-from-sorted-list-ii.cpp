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
    ListNode* deleteDuplicates(ListNode* head) {
     if(!head || !head->next)
     return head;
     unordered_map<int,int>freq;
     ListNode* current=head;
     while(current!=NULL){
        freq[current->val]++;
        current=current->next;
     }
     //Node with frequency 1
     current=head;
     ListNode* Newhead=nullptr;
     ListNode* tail=nullptr;
     while(current!=NULL){
        if(freq[current->val]==1){
            if(Newhead==NULL){
            Newhead=current; //Yha mai sbse phle element ka head le rahi jo ki duplicate n h 
            tail=current;
            }
            else{
                tail->next=current;// jb mere pass head hh tb bs mujhe baki ko updtae krna h bs
                tail=tail->next;
            }
            //yha mai cycle bn ne se rok rahi 
              ListNode* temp = current->next;
                current->next = nullptr;
                current = temp;
        }
        else {
                ListNode* temp = current;
                current = current->next;
                delete temp; // Free memory of duplicate nodes
            }
     }
     return Newhead;

    }
};