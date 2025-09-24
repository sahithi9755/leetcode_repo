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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*temp=head;
        ListNode*res=NULL;
        ListNode*tail=NULL;
        int cnt=0;
        while(temp!=NULL){
            cnt+=1;
            temp=temp->next;
        }
        temp=head;
        int mid=(cnt/2)+1;
        // if(cnt%2==0){
        //     mid=ceil(cnt/2)+1;
        // }
        // else{
        //     mid=ceil(cnt/2);
        // }
        cnt=0;
        while(temp!=NULL){
            cnt+=1;
            if(cnt!=mid){
                ListNode* newnode=new ListNode(temp->val);
                if(res==NULL){
                    res=newnode;
                    tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=newnode;
                }
            }
            temp=temp->next;
        }
        return res;
    }
};