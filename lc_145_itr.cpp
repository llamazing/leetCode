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
	
    vector<int> postorderTraversal(TreeNode* root) {
		vector<int> result;
		stack<TreeNode* > s;
		TreeNode* r, *tra = root;
		while( tra || !s.empty() )
		{
			if( tra )
			{
				s.push(tra);
				tra = tra->left;
			}
			else
			{
				tra = s.top();
				if( tra->right && tra->right != r )
				{
					tra = tra->right;
					s.push(tra);
					tra = tra->left;
				}
				else
				{
					s.pop();
					result.push_back(tra->val);
					r = tra;
					tra = NULL;
				}
			}
		}

		
		return result;
        
    }
};

