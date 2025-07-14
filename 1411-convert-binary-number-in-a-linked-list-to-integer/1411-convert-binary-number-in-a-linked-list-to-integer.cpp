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
        vector<int>bits;
        while(head!=nullptr){
            bits.push_back(head->val);
            head=head->next;
        }
        int answer=0;
        for(int i=0; i<bits.size(); i++){
            answer=answer*2+bits[i];
        }
        return answer;
    }
};