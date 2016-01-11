class Solution {
public:
    void sortColors(vector<int>& nums) {
		vector<int> zero;
		vector<int> one;
		vector<int> two;
		for(auto i : nums)
		{
			if( i == 0)
				zero.push_back(i);
			else if( i == 1)
				one.push_back(i);
			else if( i == 2)
				two.push_back(i);
		}
		int i = 0;
        for(auto z : zero)
        {
        	nums[i] = z;
        	++i;
        }

		for(auto o : one)
		{
			nums[i] = o;
			++i;
		}

		for( auto t : two)
		{
			nums[i] = t;
			++i;
		}
    }
};
/**
*0 位于段首， 2位于段尾
*void sortColors(vector<int>& nums) {
*    int zero =0, l = 0, r = nums.size()-1;
*    while (l <= r) {
*        if (nums[l] == 0) 
*            swap(nums[l++], nums[zero++]);
*        else if (nums[l] == 2) 
*            swap(nums[l], nums[r--]);
*        else
*            l++;
*    }
*}
*/


