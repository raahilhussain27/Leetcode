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
    ListNode* rotateRight(ListNode* head, int k) {
        int c=0;
        if(head==nullptr || head->next==nullptr) return head;
        else{
            int size=count(head);
            while(k>size && k>0) k-=size;
            while(c++<k){
                ListNode* temp=head;
                while(temp->next->next!=nullptr) temp=temp->next;
                ListNode* last=temp->next;
                temp->next=nullptr;
                last->next=head;
                head=last;
            }
        }
        return head;
    }
    int count(ListNode* head){
        int size=0;
        ListNode* t=head;
        while(t){
            t=t->next;
            size++;
        }
        return size;
    }
};