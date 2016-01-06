class Solution {
public:
    int numTrees(int n) {

		vector<int> result(n+1);
		result[0] = 1;
		int i, j;
		for( i = 1; i < n+1; ++i)
		{
			for( j = 1; j <= i; ++j)
			{
				result[i] += result[i-j] * result[j-1];
			}
		}

		return result[n];		
        
    }
};

/**
*
*f(0) = f(1) = 1
*f(n) = f(n-1)f(0) + f(n-2)f(1) + ... + f(0)f(n-1)
*/

