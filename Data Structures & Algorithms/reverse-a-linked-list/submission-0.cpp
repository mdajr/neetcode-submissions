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
    ListNode* reverseList(ListNode* head) {

        ListNode* curr_node = head;
        ListNode* next_node = head->next;
        ListNode* last_node = nullptr;
        
        while (curr_node) {
            next_node = curr_node->next;
            
            curr_node->next = last_node;

            last_node = curr_node;
            curr_node = next_node;
        }

        return last_node;
    }
};
