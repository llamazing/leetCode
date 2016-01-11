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

	void DFS( int &result, string & data, TreeNode *root )
	{
		if( root->left == NULL && root->right == NULL)
		{
			int i = data.size() -1;
			int base =  10;
			for(; i >= 0;--i)
			{
				result += base * (data[i] - '0');
				base *= 10;
			}
			result += root->val;
			return;
		}
		char ch = root->val + '0';
		data.push_back(ch);
		if(root->left)
			DFS(result, data, root->left);
		if(root->right)
			DFS(result, data, root->right);
		data.pop_back();
	}
    int sumNumbers(TreeNode* root) {
		int result = 0;
		string data = "";
		if( root == NULL)
			return result;
		DFS(result, data, root);
		
		return result;
        
    }
};

/**
*a better solution of recursion
*void sumTree(TreeNode* root,int n, int & ans){
*       n = n*10 + root->val; 								!!!! really a brilliant method!!
*       if(!root->left && !root->right){
*           ans += n;
*           return;
*       }
*       if(root->left)  sumTree(root->left,n,ans);
*       if(root->right) sumTree(root->right,n,ans);
*   }
*
*/


