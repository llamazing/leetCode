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
	void postOrderTra( TreeNode* root, vector<int>& result)
	{
		if( root == NULL)
			return;
		postOrderTra(root->left, result);
		postOrderTra(root->right, result);
		result.push_back(root->val);
	}
    vector<int> postorderTraversal(TreeNode* root) {
		vector<int> result;
		postOrderTra(root, result);
		return result;
        
    }
};

