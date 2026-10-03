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
    ListNode* partition(ListNode* head, int x) {
        ListNode* head1=nullptr;
        ListNode* t1=head1;
        ListNode* head2=nullptr;
        ListNode* t2=head2;
        ListNode* t=head;
        while(t!=nullptr){
            if(t->val < x){
                ListNode* n=new ListNode(t->val);
                if(t1==nullptr){
                    t1=n;
                    head1=n;
                }
                else{
                    t1->next=n;
                    t1=n;
                } 
            }
            else{
                ListNode* n=new ListNode(t->val);
                if(t2==nullptr){
                    t2=n;
                    head2=n;
                }
                else{
                    t2->next=n;
                    t2=n;
                }
            }
            t=t->next;
        }
        if(head1 == nullptr)
            return head2;
        t1->next = head2;
        return head1;
    }
};