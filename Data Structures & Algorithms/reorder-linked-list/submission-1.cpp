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

        if(head!=NULL&&head->next!=NULL){

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        ListNode* temp;

        while(fast!=NULL&&fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast=fast->next->next;
        }

        if(prev != NULL){
            prev->next = NULL;
        }


        ListNode* prevNode = NULL;
        ListNode* curr = slow;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next = prevNode;
            prevNode = curr;
            curr = next;
        }

        ListNode* second = prevNode;

        ListNode* first = head;

        while(second!=NULL&&first!=NULL){
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;
            first->next = second;
            if(tmp1!=NULL){
                second->next = tmp1;
            }
            first=tmp1;
            second=tmp2;
        }
        }
    }
};
