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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> answer;
        recursionRight(root, 0, answer);
        return answer;
    }

private:
    void recursionRight(TreeNode* root, int level, vector<int>& answer) {
        if (root == nullptr) {
            return;
        }

        // If this level is being visited for the first time
        if (answer.size() == level) {
            answer.push_back(root->val);
        }

        // Visit right subtree first, then left subtree
        recursionRight(root->right, level + 1, answer);
        recursionRight(root->left, level + 1, answer);
    }
};
