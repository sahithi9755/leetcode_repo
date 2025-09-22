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
        map<int,int>m;
        ListNode*temp=head;
        ListNode*res=NULL;
        ListNode*tail=NULL;
        while(temp!=NULL){
            m[temp->val]++;
            temp=temp->next;
        }
        for(auto itr:m){
            if(itr.second==1){
                ListNode* newnode=new ListNode(itr.first);
                if(res==NULL){
                    res=newnode;
                    tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=newnode;
                }
            }
        }
        return res;
    }
};