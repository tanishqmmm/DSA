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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        if(root == NULL) return ans;
        st1.push(root);
        while(!st1.empty()){
            TreeNode* value=st1.top();
            st1.pop();
            st2.push(value);
            if(value->left != NULL){
                st1.push(value->left);
            }
            if(value->right != NULL){
                st1.push(value->right);
            }
        }
        while(!st2.empty()){
            TreeNode* value=st2.top();
            ans.push_back(value->val);
            st2.pop();
        }
        return ans;
    }
};