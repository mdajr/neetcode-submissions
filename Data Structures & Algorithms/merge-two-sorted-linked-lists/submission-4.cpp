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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* sorted_index = &dummy;   

        while (list1 || list2) {
            if (list1 && list2) {
                if (list1->val < list2->val) {
                    sorted_index->next = list1;
                    list1 = list1->next;
                    sorted_index = sorted_index->next;
                } else {
                    sorted_index->next = list2;
                    list2 = list2->next;
                    sorted_index = sorted_index->next;
                }
            } else if (list1) {
                sorted_index->next = list1;
                break;
            } else {
                sorted_index->next = list2;
                break;
            }
        }
        return dummy.next;
    }
};
