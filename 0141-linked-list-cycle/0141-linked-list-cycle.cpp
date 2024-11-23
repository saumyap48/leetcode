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
    bool hasCycle(ListNode *head) {    
     ListNode* curr=head;
        unordered_map<ListNode*,bool>visited;
        while(curr){
            if(visited[curr]==1)
            return 1;
         visited[curr]=1;
            curr=curr->next;
        }
        return 0;
    }
};