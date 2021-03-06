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
    vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		inorderTra(root, result);
		return result;
        
    }

	void inorderTra( TreeNode * root, vector<int> &result)
	{
		if( root == NULL)
			return;
		inorderTra(root->left, result);
		result.push_back(root->val);
		inorderTra(root->right,result);
	}
};

