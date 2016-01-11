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
	bool DFS(TreeNode* root, int sum)
	{
	
		if( root->left == NULL && root->right == NULL )
		{
			if( sum - (root->val) == 0)
				return true;
			else
				return false;
		}
		bool left = false, right = false;
		sum -= (root->val);
		
		if( root->left)
			left = DFS(root->left, sum);
		if( root->right)
			right = DFS(root->right, sum);

		return left||right;
	}
	
    bool hasPathSum(TreeNode* root, int sum) {
        if( root == NULL)
			return false;

		return DFS(root, sum);
    }
};

