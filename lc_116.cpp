/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
		if( root == NULL)
			return;
		
		TreeLinkNode * last = root;		
		root->next = NULL;
		
		while( root-> left )
		{
			root->left->next = root->right;
			
			if( root->next == NULL)
			{
				root->right->next = NULL;
				root = last->left;
				last = root;
				continue;
			}
			else
			{
				root->right->next = root->next->left;
				root = root->next;				
			}
		}
        
    }
};

/*
*with a extra point and without a queue
*/

