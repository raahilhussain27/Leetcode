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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* first=head;
        ListNode* sec=first->next;
        ListNode* prev=nullptr;
        ListNode* ans=head->next;
        while(first!=nullptr && sec!=nullptr){
            ListNode* nxt=sec->next;
            sec->next=first;
            first->next=nxt;
            if(prev!=nullptr) prev->next=sec;
            prev=first;
            first=nxt;
            if(first!=nullptr) sec=first->next;
            else sec=nullptr;
        }
        return ans;
    }
};