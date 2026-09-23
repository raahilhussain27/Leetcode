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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;
        while(head!=nullptr && head->val==val) head=head->next;
        if(head==nullptr) return head;
        ListNode* temp=head;
        while(temp!=nullptr){
            if(temp->val==val && temp->next!=nullptr){
                temp->val=temp->next->val;
                temp->next=temp->next->next;
            }
            else if(temp->val==val && temp->next==nullptr){
                ListNode* mover=head;
                while(mover->next!=temp) mover=mover->next;
                mover->next=nullptr;
                break;
            }
            else temp=temp->next;
        }
        return head;
    }
};