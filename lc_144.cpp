/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
		vector<int> result;
		preTraverse(root, result);

		return result;
        
    }

	void preTraverse(TreeNode* root, vector<int> & res)
	{
		if( root == NULL)
			return;
		res.push_back(root->val);
		preTraverse(root->left, res);
		preTraverse( root->right, res);
	}
};

