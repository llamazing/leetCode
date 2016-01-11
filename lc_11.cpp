class Solution {
public:
    int maxArea(vector<int>& height) {
		
		int size = height.size();
		int result = 0;
		int	s = 0, e = size - 1;
		while( s < e)
		{
			result = max(result, min(height[s],height[e]) * (e - s));
			if( height[s] > height[e])
				--e;
			else
				++s;
		}
		
		return result;
        
    }
};

