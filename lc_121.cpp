class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int size = prices.size();
		if( size < 2)
			return 0;
		int i = 1, min;
		min = prices[0];
		int result = 0;

		for(; i  < size; ++i)
		{
			if( min  < prices[i])
			{
				if( result < prices[i]- min)
					result = prices[i] - min;
			}
			else
			{
				min = prices[i];
			}
		}
		return result;
    }
};

