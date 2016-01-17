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
    int minDepth(TreeNode* root) {
		if(root == NULL)
			return 0;
		if( root->left == NULL && root->right == NULL)
			return 1;
		int left = -1, right = -1;
		if( root->left)
			left = minDepth(root->left);
		if( root->right)
			right = minDepth(root->right);

		int result = 0;
		if( left != -1 && right != -1)
			result = min(left, right) + 1;
		else if( left == -1)
			result = right + 1;
		else
			result = left + 1;
			

		return result;
        
    }
};

/**
*The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
*a more simplify solution using java
*public int minDepth(TreeNode root) {
*   if (root == null)
*       return 0;
*   if (root.left != null && root.right != null)
*       return Math.min(minDepth(root.left), minDepth(root.right))+1;
*   else
*       return Math.max(minDepth(root.left), minDepth(root.right))+1;
*}
*/

