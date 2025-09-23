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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*temp=head;
        long long cnt=0;
        ListNode*even=NULL;
        ListNode*odd=NULL;
        ListNode*tail=NULL;
        ListNode*tail1=NULL;
        while(temp!=NULL){
            cnt+=1;
            if(cnt%2==0){
                ListNode* newnode=new ListNode(temp->val);
                if(even==NULL){
                    even=newnode;
                    tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=newnode;
                }
            }
            if(cnt%2!=0){
                 ListNode* newnode1=new ListNode(temp->val);
                if(odd==NULL){
                    odd=newnode1;
                    tail1=newnode1;
                }
                else{
                    tail1->next=newnode1;
                    tail1=newnode1;
                }
            }
            temp=temp->next;
        }
        if(tail1!=NULL){
            tail1->next=even;
        }
        return odd;
    }
};