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
    vector<vector<int>> levelOrder(TreeNode* root) {
		
		vector<vector<int> > result;
		if( root == NULL)
			return result;
		vector<int> data;
		queue<TreeNode*> q;
		q.push(root);
		
		int level = 1, next = 0;
		TreeNode* top;
		
		while(!q.empty())
		{
			top = q.front();
			q.pop();
			--level;
			data.push_back(top->val);
				
			if( top->left)
			{
				++next;
				q.push(top->left);
			}

			if( top->right)
			{
				++next;
				q.push(top->right);
			}

			if( level == 0)
			{
				level = next;
				next = 0;
				result.push_back(data);
				data.clear();
			}
			
		}

		return result;
        
    }
};

