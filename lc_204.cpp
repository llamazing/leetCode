class Solution {
public:
    int countPrimes(int n) {
		vector<int> nonprime(n+1);
		nonprime[2] = 0;
		int bound = sqrt((double)n)+1;
		int i = 2, j;
		for(; i < bound; ++i)
		{
			if( nonprime[i] == 0)
			{
				for(j = i*i; j < n; j +=i)
				{
					nonprime[j] = 1;
				}
			}
		}
		int result = 0;
		for(i = 2; i < n;++i)
		{
			if( nonprime[i] == 0)
				++result;
			
		}
        return result;
    }
};


