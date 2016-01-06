class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
		stack<TreeNode*> st;
		st.push(root);
		TreeNode * top;
		top = root;
		while( top->left )
		{
				st.push(top->left);
				top = top->left;
		}	
		while(!st.empty())
		{
			top = st.top();			
			--k;
			st.pop();
			if( k == 0)
				return top->val;
			if( top->right ){
				st.push(top->right);
				top = top->right;
				while( top->left)
				{
					st.push(top->left);
					top = top->left;
				}
			}
			
		}
        
    }
	
};


