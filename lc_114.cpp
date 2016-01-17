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
	TreeNode *inOrderTra(TreeNode* root, TreeNode* last)
	{
		last->right = root;
		TreeNode* temp = root->right;
		TreeNode* rt = root;
		if( root->left )
		{
			rt = inOrderTra(root->left, root);	
			root->left = NULL;
		}
		
		if( temp )
			rt = inOrderTra(temp, rt);		

		return rt;
		
	}
    void flatten(TreeNode* root) {
		if( root == NULL)
			return ;
		TreeNode* head = new TreeNode(0);
		inOrderTra(root, head);        
    }
};

