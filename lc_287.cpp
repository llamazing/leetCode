class Solution {
public:
    int findDuplicate(vector<int>& nums) {
		int slow = 0, fast = 0;
		bool first = true;
		while(slow != fast || first)
		{
			first = false;
			slow = nums.at(slow);
			fast = nums.at(nums.at(fast));
		}

		fast = 0;
		
		while(true)
		{
			fast = nums.at(fast);
			slow = nums.at(slow);

			if( fast == slow)
				return fast;
		}
		
        
    }
};

//Floyd's cycle


