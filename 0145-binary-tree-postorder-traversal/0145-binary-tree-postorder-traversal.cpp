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
            vector<int>result;
            if(root==nullptr)
            return result;
            stack<TreeNode*>nodeStack;
            nodeStack.push(root);
            while(!nodeStack.empty()){
                TreeNode* node=nodeStack.top();
                nodeStack.pop();
                result.push_back(node->val);
                if(node->left)
                nodeStack.push(node->left);
                if(node->right)
                nodeStack.push(node->right);
            }
            reverse(result.begin(),result.end());
            return result;
		}
};