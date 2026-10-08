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
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        vector<int>arr;
        if(temp==nullptr || temp->next==nullptr) return head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* h=new ListNode(arr[0]);
        ListNode* te=h;
        for(int i=1;i<arr.size();i++){
            ListNode* t=new ListNode(arr[i]);
            te->next=t;
            te=t;
        }
        return h;
    }
};