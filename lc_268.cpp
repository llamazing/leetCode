class Solution {
public:
    int missingNumber(vector<int>& nums) {
		int sum = 0;
		int size = nums.size();
		sum = size * (size +1)/2;
		for(int i = 0; i < size; ++i)
		{
			sum -= nums.at(i);
		}

		return sum;
    }
};
/**
*bitmanipulation ^!!
*(^nums[i]) ^ (0^1^n)
*/

