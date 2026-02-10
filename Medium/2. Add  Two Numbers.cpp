class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);  // Dummy node to simplify code
        ListNode* current = dummy;  // Pointer to the current node in the result
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;

            int sum = val1 + val2 + carry;
            carry = sum / 10;  // Carry for the next position
            current->next = new ListNode(sum % 10);  // Create a new node for the current digit
            current = current->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return dummy->next;  // Return the result starting from the first real node
    }
};