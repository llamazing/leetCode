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
	bool judgeSymmetric(vector<int>& data)
	{
		int s = 0, e = data.size() - 1;
		
		while(s < e)
		{
			if( data[s] != data[e])
				return false;
			++s;
			--e;
		} 
		
		return true;
	}
    bool isSymmetric(TreeNode* root)
	{
		if( root == NULL)
			return true;
		queue<TreeNode*> q;
		int level = 1, next = 0;
		q.push(root);
		vector<int> data;

		TreeNode* top;
		while( !q.empty())
		{
			top = q.front();
			--level;
			q.pop();
			if( top )
			{
				data.push_back(top->val);
				q.push(top->left);
				q.push(top->right);
				next += 2;
			}
			else
			{
				data.push_back(-1);
			}

			if( level == 0)
			{
				if( !judgeSymmetric(data))
					return false;
				else
				{
					level = next;
					next = 0;
					data.clear();
				}
			}

		}

		return true;
        
    }
};

/*
*using recursive one time traverse
*bool dfs(TreeNode *treel, TreeNode *treer){
*    if(!(treel&&treer)) return treel==treer;
*   if(!(treel->val == treer->val)) return false; 
*   return dfs(treel->left, treer->right)&&dfs(treel->right, treer->left);
* }
*
*two level traversal: left to right, right to left
*/

