/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>m;
        if(head==nullptr) return nullptr;
        Node* newHead=new Node(head->val);
        Node* temp=head->next;
        Node* newTemp=newHead;
        m[head]=newHead;
        while(temp!=nullptr){
            Node* copy=new Node(temp->val);
            newTemp->next=copy;
            m[temp]=copy;
            newTemp=newTemp->next;
            temp=temp->next;
        }
        temp=head;
        newTemp=newHead;
        while(temp!=nullptr){
            newTemp->random=m[temp->random];
            temp=temp->next;
            newTemp=newTemp->next;
        }
        return newHead;
    }
};