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
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int result = -1;
        inorder(root,k,count,result);
        return result;
    }
    void inorder(TreeNode* root, int k,int &ct,int &result){
        if(root == NULL || ct >= k){
            return;
        }
        inorder(root->left,k,ct,result);
        ct++;
        if(k == ct){
            result = root->val;
            return;
        }
        inorder(root->right,k,ct,result);
    }
};