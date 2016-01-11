class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        if( m < 1)
            return 0;
        int n = grid[0].size();
		if( n == 0)
			return 0;
		int **dp = new int*[m+1];
		int i = 0;
		for(; i <= m; ++i)
		{
			dp[i] = new int[n+1];
		}
		int j = 0;
		dp[1][0] = 0;
		for( i = 1; i <= n; ++i )
		{
			dp[1][i] = dp[1][i-1] + grid[0][i-1];
		}
		dp[0][1] = 0;
		for( j = 1; j <= m; ++j )
		{
			dp[j][1] = dp[j-1][1] + grid[j-1][0];
		}
		for( i = 2; i <= m; ++i)
		{
			for( j = 2; j <= n; ++j)
			{
				dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i-1][j-1];
			}
		}
		
       return dp[m][n]; 
    }
};

/**
*using O(n)
*space O(1) ?
*/

