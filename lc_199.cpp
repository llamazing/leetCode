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
    vector<int> rightSideView(TreeNode* root) {
		vector<int> result;
		if( root == NULL)
			return result;

		queue<TreeNode*> q;
		q.push(root);
		int level = 1, next = 0;

		TreeNode * top;
		while( !q.empty())
		{
			top = q.front();
			q.pop();
			--level;
			if( top->left){
				q.push(top->left);
				++next;
			}
			if( top->right){
				q.push(top->right);
				++next;
			}

			if( level == 0)
			{
				level = next;
				next = 0;

				result.push_back(top->val);
			}
			
			
		}

		return result;
        
    }
};

