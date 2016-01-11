class Solution {
public:
    int rob(vector<int>& nums) {
		int size = nums.size();
		int nRob = 0;
		int rob = 0;
		int i = 0;
		int temp;
		for(;i < size;++i)
		{
			temp = nRob;
			nRob = max(nRob,rob);
			rob = temp+nums[i];
			
		}
		
        return max(nRob,rob);
    }
};

