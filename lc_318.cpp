class Solution {
public:
    int maxProduct(vector<string>& words) {
		int size = words.size();
		vector<int> mask(size);
		int i = 0, j;
		int result = 0;

		for(auto &str : words)
		{
			mask[i] = 0;
			for( auto &ch : str)
			{
				mask[i] |= (1<<(ch -'a'));
			}
			++i;
		}

		i = 0;
		int a = 0;

		for( auto & str : words)
		{
			j = str.size();
			for( a = i+1; a < size; ++a)
			{
				if((mask[i] & mask[a]) == 0)
				{
					if(result < j * words[a].size())
						result = j * words[a].size();
				}				
				
			}

			++i;
			
		}
		
		
		return result;
        
    }
};

/**
*a good method to determine whether two words has common letters
*
*/

