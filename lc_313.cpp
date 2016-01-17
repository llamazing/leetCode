class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
		int size = primes.size();
		vector<int> result(n);
		result.push_back(1);

		int temp = n;
		--temp;
		int count = 1;
		int i = 0, j = 0;
		while(temp)
		{	
			if( j >= primes.size())
				break;
			result.push_back(primes[j]);
			--temp;
			if( temp == 0)
				break;
			for( i = 0;)
			
			++j;
			
		}
		

		return result[n-1];
        
    }
};

