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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);   
        ListNode* last = l3;

        ListNode* st1 = l1;
        ListNode* st2 = l2;

        int carry = 0;

        while (st1 != nullptr || st2 != nullptr || carry) {
            int sum = carry;

            if (st1 != nullptr) {
                sum += st1->val;
                st1 = st1->next;
            }

            if (st2 != nullptr) {
                sum += st2->val;
                st2 = st2->next;
            }

            carry = sum / 10;

            ListNode* temp = new ListNode(sum % 10);
            last->next = temp;
            last = temp;
        }

        return l3->next;
    }
};