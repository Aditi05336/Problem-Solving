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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        int size=0;
        ListNode*temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        if(size==n){
            ListNode*temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        int cnt=0;
        temp=head;
        while(temp!=NULL){
            if(cnt==size-n-1){
                ListNode*del = temp->next;
                temp->next=del->next;
                delete del;
                return head;
            }
            cnt++;
            temp=temp->next;
        }
        return head;

        
    }
};
