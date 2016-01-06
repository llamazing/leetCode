class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int size = prices.size();

		if( size < 2)
			return 0;
		int i = 0;
		int h_s = 0;
		int h_n = -prices[0];
		int n_b = -prices[0];
		int n_n = 0;
		int temp;
		for(;i < size; ++i)
		{
			temp = h_s;
			h_s = (h_n > n_b ? h_n : n_b) + prices[i];
			h_n = h_n > n_b ? h_n : n_b;
			n_b = -prices[i] + n_n;
			n_n = temp > n_n ? temp : n_n;
		}
		
        return ( h_s > n_n ?  h_s : n_n);
    }
};

/*
*each day's actions
*/

