class Solution {
public:
    int numSquares(int n) {
		int bound = sqrt(n) + 1;

		vector<int> dp(n+1);

		int i = 0, j = 1;
		for(;i <= n; ++i)
		{
			dp[i] = i;
			for( j = 2; i - j*j >= 0; ++j)
			{
				dp[i] = min(dp[i], dp[i-j*j] + 1);
			}
		}
		
		return dp[n];
        
    }
};

/**
*DP
*ini dp[i] = i;
*dp[i] = min{ dp[i], dp[i-j*j] + 1};
*/

