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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode*temp=head->next;
        ListNode*res=new ListNode(head->val);
        ListNode*tail=res;
        while(temp!=NULL){
            ListNode* newnode=new ListNode(temp->val);
            if(tail->val!=temp->val){
                if(res==NULL){
                    res=newnode;
                    tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=tail->next;
                }
            }
            temp=temp->next;
        }
        return res;
    }
};