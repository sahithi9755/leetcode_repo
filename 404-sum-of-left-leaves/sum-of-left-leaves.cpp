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
    int sumOfLeftLeaves(TreeNode* root) {
        vector<int>v;
        queue<TreeNode*>q;
        int sum=0;
        if(root!=NULL) q.push(root);
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                if(q.front()->left!=NULL) {
                    if(q.front()->left->left==NULL&&q.front()->left->right==NULL) sum+=q.front()->left->val;
                }
                q.pop();
            }

        }
        return sum;
    }
};