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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        ListNode* head1;
        ListNode* prev=new ListNode();
        ListNode* t=prev;
        int sum=0;
        while(temp){
            
            if(temp->val!=0){
                sum+=temp->val;
                temp=temp->next;
            }
            else{
                ListNode* temp1=new ListNode(sum);
                t->next=temp1;
                t=temp1;
                temp=temp->next;
                sum=0;
            }
        }
        return  prev->next;
    }
};