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
    bool isSymmetric(TreeNode* root) {
        //your code goes here
        if(root==nullptr){
            return true;
        }
        return symmetry(root->left,root->right);

    }
private:
bool symmetry(TreeNode* left,TreeNode* right){
    if(left==nullptr && right==nullptr){
        return true;
    }
    if(left==nullptr || right==nullptr){
        return false;
    }
    if(left->val!=right->val){
        return false;
    }
    return symmetry(left->left,right->right)&& symmetry(left->right,right->left);
}

};