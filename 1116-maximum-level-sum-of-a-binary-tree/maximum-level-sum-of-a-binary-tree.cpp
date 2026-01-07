/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        vector<int>r;
        queue<TreeNode*>q;
        if(root!=NULL) q.push(root);
        while(!q.empty()){
            int s=q.size();
            int sum=0;
            for(int i=0;i<s;i++){
                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                sum+=q.front()->val;
                q.pop();
            }
            r.push_back(sum);
        }
        int index=0;
        int maxi=INT_MIN;
        for(int i=0;i<r.size();i++){
            maxi=max(maxi,r[i]);
        }
        for(int i=0;i<r.size();i++){
            if(maxi==r[i]){
                index=i+1;
                break;
            }
        }
        return index;
    }
};