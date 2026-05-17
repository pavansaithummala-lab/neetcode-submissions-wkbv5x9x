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
    bool hasCycle(ListNode* head) {
        ListNode* v1 = head;
        ListNode* v2 = head;

        while(v2 && v2->next){
            v1 = v1->next;
            v2 = v2->next->next;

            if(v1==v2){
                return true;;
            }
        }
        return false;
    }
};
