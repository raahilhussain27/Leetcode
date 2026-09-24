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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        int k=0;
        int sum=t1->val+t2->val;
        ListNode* head=new ListNode();
        if(sum>9){
            head->val=(sum%10);
            sum/=10;
            k=sum;
        }
        else head->val=(sum);
        ListNode* t=head;
        t1=t1->next;
        t2=t2->next;
        while(t1!=nullptr || t2!=nullptr){
            if(t1!=nullptr && t2!=nullptr){
                sum=k+t1->val+t2->val;
                t->next=new ListNode(sum%10);
                sum/=10;
                k=sum;        
                t1=t1->next;
                t2=t2->next;
                t=t->next;
            }
            else if(t1!=nullptr && t2==nullptr){
                sum=k+t1->val;
                t->next=new ListNode(sum%10);
                sum/=10;
                k=sum;        
                t1=t1->next;
                t=t->next;
            }
            else{
                sum=k+t2->val;
                t->next=new ListNode(sum%10);
                sum/=10;
                k=sum;        
                t2=t2->next;
                t=t->next;
            }
        }
        if(k!=0){
            t->next=new ListNode(k);
        }
        return head;
    }
};