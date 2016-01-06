class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int size = prices.size();
		int hand = 0;
		int result = 0;
		int i = 0;
		int b = 0;
		for(;i < size; ++i)
		{
			if( hand == 0 )
			{
				if( i == size -1)
					continue;
				if( prices.at(i) < prices.at(i+1))
				{
					b = prices.at(i);
					hand = 1;
				}
				
			}
			else
			{
				if( i == size -1)
				{
					result += prices.at(i) -b;
					hand = 0;
					break;
				}
				if( prices.at(i) > prices.at(i+1) )
				{
					hand = 0;
					result += prices.at(i) - b;
				}
			}
			
		}

		return result;
        
    }
};

