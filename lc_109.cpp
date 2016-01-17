/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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

	TreeNode* buildBinaryTree( vector<int>& ele, int s, int e)
	{
		if( s == e)
		{
			TreeNode* node = new TreeNode(ele[s]);
			return node;
		}
		if( s > e)
			return NULL;
		int mid = (e - s )/2 + s;
		TreeNode* root = new TreeNode(ele[mid]);
		root->left = buildBinaryTree( ele, s , mid - 1);
		root->right = buildBinaryTree( ele, mid + 1, e);


		return root;
	}
    TreeNode* sortedListToBST(ListNode* head) {
		vector<int> sortArray;
		while( head )
		{
			sortArray.push_back(head->val);
			head = head->next;
		}

		return buildBinaryTree(sortArray, 0, sortArray.size() - 1);
        
    }
};
/**
*>>优先级小于+-
*O(1) space solution 
*TreeNode * DFS(int len, int current, ListNode **curr) {
*
*       TreeNode *node = new TreeNode(0);
*
*       if(current * 2 + 1 <= len - 1) {
*           node->left = DFS(len, current * 2 + 1, curr);
*       }
*
*       node->val = (*curr)->val;
*       *curr = (*curr)->next;
*
*       if(current * 2 + 2 <= len - 1) {
*           node->right = DFS(len, current * 2 + 2, curr);
*       }     
*
*       return node;
*   }
*/

