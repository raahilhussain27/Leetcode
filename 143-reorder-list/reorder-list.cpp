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
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* list=rev(slow->next);
        slow->next=nullptr;
        ListNode* t1=head;
        ListNode* t2=list;
        ListNode* fi_next;
        ListNode* sec_next;
        while(t2!=nullptr){    
            fi_next=t1->next;
            sec_next=t2->next;
            t1->next=t2;
            t2->next=fi_next;
            t2=sec_next;
            t1=fi_next;
        }
    }
    ListNode* rev(ListNode* hd){
        ListNode* prev=nullptr;
        ListNode* curr=hd;
        ListNode* nxt;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
};