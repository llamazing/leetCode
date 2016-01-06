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
	TreeNode* buildBinarySearchTree( vector<int>& nums, int s, int e)
	{
		if( s > e)
		{
			return NULL;			
		}
		
		int mid  = (s + e)/2;
		TreeNode * root = new TreeNode(nums[mid]);
		//root->val = nums[mid];
		root->left = buildBinarySearchTree(nums, s, mid - 1 );
		root->right = buildBinarySearchTree(nums, mid + 1, e);
		
		return root;
	}
	
    TreeNode* sortedArrayToBST(vector<int>& nums){
		if( nums.size() < 1)
			return NULL;
		int  s = 0;
		int  e = nums.size() - 1;
		int mid = (s + e)/2;
		TreeNode * root= new TreeNode(nums[mid]);
		//root->val = nums[mid];
		root->left = buildBinarySearchTree(nums, 0, mid - 1 );
		root->right = buildBinarySearchTree(nums, mid + 1, e);

		return root;        
    }
};

