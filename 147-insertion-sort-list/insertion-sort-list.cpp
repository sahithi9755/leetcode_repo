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
    ListNode* insertionSortList(ListNode* head) {
        map<int,int>m;
        ListNode*temp=head;
        ListNode*res=NULL;
        ListNode*tail=NULL;
        while(temp!=NULL){
            m[temp->val]++;
            temp=temp->next;
        }
        int count=0;
        for(auto itr:m)
        {
            count=itr.second;
            if(itr.second==1){
                ListNode*newnode=new ListNode(itr.first);
                if(res==NULL){
                    res=newnode;
                    tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=newnode;
                }
            }
            if(itr.second>1)
            {
                while(count--){
                    ListNode*newnode=new ListNode(itr.first);
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
        }
        return res;
    }
};