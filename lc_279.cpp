class Solution {
public:
	int DFS(vector<int>& element, int &result, int n, int s)
	{
		if( n < 0 || s >= element.size())
			return -1;
		int i;
		for( i = s; i < element.size(); ++i)
		{
			++result;
			if( DFS( element, result, n - element[i], i) !=  -1)
				return result;
			--result;
			
		}
		return -1;
		
	}
    int numSquares(int n) {
		int bound = sqrt(n);
		vector<int> element;

		int i = 2;
		for( ;i <= bound; ++i)
		{
			element.push_back(i*i);
		}
		int result = 0;

		DFS(element, result, n, 0);
		return result;
        
    }
};

/**
*DFS TLE!!
*
*int numSquares(int n) {
*   int dp[n+1];
*   for(int i=0;i<=n;++i){
*       dp[i]=i; //upper bound: sum up i 1's
*       for(int j=1;i-j*j>=0;++j){
*           if(dp[i-j*j]+1<dp[i]) dp[i]=dp[i-j*j]+1; //dp[i]=min(dp[i-j*j]+1 for all j from 1 to sqrt(i))
*       }
*   }
*   return dp[n];
*}
*/

