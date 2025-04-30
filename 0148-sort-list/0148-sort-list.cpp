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
    ListNode* sortList(ListNode* head) {
        vector<int>nums;
        ListNode* curr=head;
        while(curr!=NULL){
        nums.push_back(curr->val);
        curr=curr->next;
        }
        sort(nums.begin(),nums.end());
        curr=head;
        int n=nums.size();
        for(int i=0; i<n; i++){
           curr->val=nums[i];
           curr=curr->next;
        }
        return head;
    }
};