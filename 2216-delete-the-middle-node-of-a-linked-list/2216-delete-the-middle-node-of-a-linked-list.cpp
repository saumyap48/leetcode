class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
   
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        int count = 0;
        ListNode* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }

        int middle = count / 2;
        current = head;

        for (int i = 0; i < middle - 1; i++) {
            current = current->next;
        }
        ListNode* toDelete = current->next;
        current->next = current->next->next;

        return head;
    }
};