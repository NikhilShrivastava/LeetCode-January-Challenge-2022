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
    int count(TreeNode* node, int path) { // save path as bytes in int
        if (!node) return 0;
		// update path by adding new point to the right to get answer quickly
        path <<= 1;
        path += node->val;
		// if leaf return answer
        if (!node->left && !node->right) {
            return path;
        } else { // if not leaf continue pathing
            return count(node->left, path) + count(node->right, path);
        }
    }
    int sumRootToLeaf(TreeNode* root) {
        return count(root, 0);
    }
};
