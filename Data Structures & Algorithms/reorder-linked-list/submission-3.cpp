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
    void reorderList(ListNode* head) {

        if(head&&head->next){
            ListNode* slow = head;
            ListNode* fast = head;
            ListNode* prev = NULL;

            while(fast&&fast->next){
                prev = slow;
                slow= slow->next;
                fast = fast->next->next;
            }

            if(prev != NULL){
            prev->next = NULL;
            }

            ListNode* prevNode = NULL;
            ListNode* temp = NULL;
            ListNode* curr = slow;
            while(curr){
                temp = curr->next;
                curr->next = prevNode;
                prevNode = curr;
                curr = temp;
            }

            ListNode* second = prevNode;

            ListNode* first = head;

            while(first&&second){
                ListNode* tmp1 = first->next;
                ListNode* tmp2 = second->next;
                first->next = second;
                if(tmp1){
                    second->next = tmp1;
                }
                first=tmp1;
                second=tmp2;
            }
        }
    }
};
