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
	void vecToStr(string& result, vector<int>& data)
	{
		int i = 0, e = data.size();
		for(; i < e; ++i)
		{
			if( i != 0)
				result.append("->");
			result.append(to_string(data[i]));
		}
	}
	
	void dfs(vector<string>& result, vector<int> &data, TreeNode* root)
	{
		data.push_back(root->val);
		if( root->left == NULL && root->right == NULL)
		{
			string str = "";
			vecToStr(str, data);
			result.push_back(str);
			data.pop_back();
			return;
		}
		if( root->left)
		{
			dfs(result, data, root->left);
		}
		if( root->right)
		{
			dfs(result, data, root->right);
		}

		data.pop_back();
	}
	
    vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> result;
		
		if( root == NULL)
			return result;

		vector<int> data;
		
		dfs(result, data, root);
		return result;        
    }
};

