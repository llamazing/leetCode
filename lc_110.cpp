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
	bool heightOfTree(TreeNode* root, int &height)
	{
		if( root == NULL)
		{
			height = 0;
			return true;
		}
		int leftheight , rightheight;
		bool left, right;
		left = heightOfTree(root->left, leftheight);
		right = heightOfTree(root->right, rightheight);
		if( !left || !right)
			return false;
		if( leftheight == rightheight)
		{
			height = leftheight + 1;
			return true;
		}
		if( leftheight > rightheight)
		{
			if( leftheight -1 > rightheight)
				return false;
			height = leftheight + 1;
			return true;
		}
		if( rightheight -1 > leftheight)
			return false;
		height = rightheight + 1;
		return true;
		
	}
    bool isBalanced(TreeNode* root) {
		int height;
		return heightOfTree(root, height);
        
    }
};

/**
*a faster solution
*???
*private int check(TreeNode root){
*   if (root == null) return 0;
*   int l = check(root.left);
*   int r = check(root.right);
*   return l == -1 || r == -1 || Math.abs(l-r) > 1 ? -1 : 1 + Math.max(l,r);
*}
*/

