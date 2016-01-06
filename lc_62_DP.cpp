class Solution {
public:	
    int uniquePaths(int m, int n) {
		int ** dp = new int * [m+1];
		int i = 0;
		for(; i <=m; ++i)
		{
			dp[i] = new int [n+1];	
		}
		for( i = 1; i <= m;++i)
		{
			dp[i][0] = 0;
			dp[i][1] = 1;
		}

		for( i = 1; i <= n;++i)
		{
			dp[0][i] = 0;
			dp[1][i] = 1;
		}
		int  j = 0;
		for( i = 2; i <= m; i++)
		{
			for( j = 2; j <= n; ++j)
			{
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}

		return dp[m][n];
    }
};

