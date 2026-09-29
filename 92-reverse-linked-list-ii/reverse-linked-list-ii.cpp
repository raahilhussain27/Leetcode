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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* t=head;
        int k=1;
        if(left==right) return head;
        int c=0;
        ListNode* cnt=head;
        while(cnt){
            cnt=cnt->next;
            c++;
        }
        if(left==1 && right==c){
            ListNode* ans=rev(head);
            return ans;
        }
        if(left == 1){
            int k = 1;
            while(k < right){
                t = t->next;
                k++;
            }
            ListNode* rem = t->next;
            t->next = nullptr;
            ListNode* f = rev(head);
            ListNode* z = f;
            while(z->next){
                z = z->next;
            }
            z->next = rem;
            return f;
        }
        while(k<left-1){
            t=t->next;
            k++;
        }
        ListNode* curr=t->next;
        t->next=nullptr;
        ListNode* first=curr;
        k=0;
        while(k<right-left){
            curr=curr->next;
            k++;
        }
        ListNode* rem=curr->next;
        curr->next=nullptr;
        ListNode* reversed=rev(first);
        t->next=reversed;
        ListNode* rev_te=reversed;
        while(rev_te->next!=nullptr){
            rev_te=rev_te->next;
        }
        rev_te->next=rem;
        return head;
    }
    ListNode* rev(ListNode* first){
        ListNode* prev=nullptr;
        ListNode* cur=first;
        ListNode* n;
        while(cur!=nullptr){
            n=cur->next;
            cur->next=prev;
            prev=cur;
            cur=n;
        }
        return prev;
    }
};