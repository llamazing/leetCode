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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
		queue<TreeNode* > q;
		int level, nextL;
		level = 1;
		nextL = 0;
		vector<int> data;
		vector<vector<int>> res;
		if( root == NULL)
			return res;
		q.push(root);
		TreeNode* top;
		while(!q.empty())
		{
			top = q.front();
			q.pop();
			data.push_back(top->val);
			--level;
			if( top->left )
			{
				q.push(top->left);
				++nextL;
			}
			if( top->right )
			{
				q.push(top->right);
				++nextL;
			}
			if( level == 0)
			{
				level = nextL;
				nextL = 0;
				res.push_back(data);
				data.clear();
			}
		}
		vector<vector<int>> result;
		vector<vector<int>>::reverse_iterator itr = res.rbegin();
		for(;itr != res.rend();++itr)
		{
			result.push_back(*itr);
		}

		return result;
    }
};

