class Solution {
public:

	int getMax(vector<int>& prices, int s, int e)
	{
		if( s == e)
			return 0;
		int i = s + 1;
		int min = prices[s];
		int result = 0;
		
		for(;i <= e;++i)
		{
			if( min >= prices[i])
			{
				min = prices[i];
			}
			else
			{
				if( i + 1 <= e)
				{
					if( prices[i] <= prices[i+1])
						continue;
					else
					{
						result += prices[i] - min;
						min = prices[i+1];
					}
				}
				else
				{
					result += prices[i] - min;
				}
			}
		}

		return result;
			
	}
    int maxProfit(vector<int>& prices) {
		int size = prices.size();
		if( size < 2)
			return 0;
		int ** dp = new int* [prices.size() + 1];
		int i = 0;
		for(; i <= size;++i)
		{
			dp[i] = new int[size + 1];
		}
		int j;
		int n = size;
		for(i = 1; i <= n; ++i)
		{
			for( j = 1; j<= i; ++j)
			{
				dp[i][j] = 0;
			}
			for( j = i + 1; j <= n; ++j)
			{
				dp[i][j] = getMax(prices, i-1, j-1);
			}

		}
		for(i = n; i >= 1; i-- )
		{
			for( j = 1; i + j < n; ++j )
			{
				if( dp[i][n]  < dp[i][j+i] + dp[j+i+1][n])
					dp[i][n]  = dp[i][j+i] + dp[j+i+1][n];
			}
			
		}

		return dp[1][n];

		
        
    }
};

//TLE 

/**
*a good  solution someone provides
*https://leetcode.com/discuss/72892/very-easy-to-understand-one-pass-solution-with-no-extra-space
*/

