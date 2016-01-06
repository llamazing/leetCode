class Solution {
public:
	void DFS(int m, int n, int &result)
	{
		if( ( m == 0 && n == 1) || ( m == 1 && n == 0))
		{
			++result;
			return;
		}
		if( m == 0)
		{
			DFS( m, n - 1, result);
			return;
		}
		if( n == 0 )
		{
			DFS( m - 1, n, result);
			return;
		}
		DFS( m - 1, n, result);
		DFS( m, n - 1, result);
	}
	
    int uniquePaths(int m, int n) {
		if( m == 0 || n == 0 )
			return 0;
		if( m == 1 && n == 1)
			return 1;
    
        int result = 0;
		DFS(m - 1, n - 1, result);

		return result;
    }
};


/*
*DFS TLE
*DP
*/

