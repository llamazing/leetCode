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
		root->next = NULL;
		TreeLinkNode* last = root;
		TreeLinkNode* tra = root, *temp=NULL;
		
		while(tra)
		{
			if( tra->left)
			{
				if( tra->right )
				{
					tra->left->next = tra->right;					
				}
				else{
				tra->left->next = NULL;
				temp = tra->next;
				while( temp )
				{
					if(temp->left)
					{
						tra->left->next = temp->left;
						break;
					}
					if( temp->right)
					{
						tra->left->next = temp->right;
						break;
					}
					temp = temp->next;
				} 
				}
			}
			if( tra->right )
			{
				if( tra->next)
				{
					tra->right->next = NULL;
					temp = tra->next;
					while( temp )
					{
						if( temp->left)
						{
							tra->right->next = temp->left;
							break;
						}
						if( temp->right)
						{
							tra->right->next = temp->right;
							break;
						}
						temp = temp->next;
					}
					
						
				}
				else
					tra->right->next = NULL;
			}
			if( tra->next )
			{
				tra = tra->next;
			}
			else
			{
				if( last->left)
				{
					tra = last->left;
					last = last->left;
					continue;
				}
			   	else if( last->right)
				{
					tra = last->right;
					last = last->right;
					continue;
				}
				else
				{
					tra = NULL;
					while( last->next )
					{
						last = last->next;
						
						if( last->left)
						{
							tra = last->left;
							last = last->left;
							break;
			            }
						if( last->right)
						{
							tra = last->right;
							last = last->right;
							break;
						}
						
					}
				}
		  	}
	 	}
        
    }
};

/**
*using a pre pointer and a head pointer may simplify the code
*
*a brilliant java solution
*public void connect(TreeLinkNode root) {
*    TreeLinkNode dummyHead = new TreeLinkNode(0);
*   TreeLinkNode pre = dummyHead;
*   while (root != null) {
*       if (root.left != null) {
*           pre.next = root.left;
*           pre = pre.next;
*       }
*       if (root.right != null) {
*           pre.next = root.right;
*           pre = pre.next;
*       }
*       root = root.next;
*       if (root == null) {
*           pre = dummyHead;
*           root = dummyHead.next;
*           dummyHead.next = null;
*       }
*   }
*}
*
*/

