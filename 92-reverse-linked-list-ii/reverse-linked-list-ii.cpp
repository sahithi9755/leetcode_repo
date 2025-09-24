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
        ListNode*temp=head;
        ListNode*res=NULL;
        ListNode*tail=NULL;
        int cnt=0;
        stack<int>st;
        if(head->next==NULL){
            return head;
        }
        while(temp!=NULL){
            cnt+=1;
            if(cnt>=left&&cnt<=right)
            {
                st.push(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        cnt=0;
        while(temp!=NULL){
            cnt+=1;
           if(cnt>=left&&cnt<=right){
            temp->val=st.top();
            st.pop();
           }
           temp=temp->next;
        }
        return head;
    }
};