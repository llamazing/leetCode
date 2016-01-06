/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
		ListNode* result = head , *temp1, *temp2, *rt;
		ListNode* tra = head;
		bool first = true;
		while( tra )
		{
			if(tra->next == NULL)
				break;
			temp1 = tra->next;
			temp2 = temp1->next;			
			if( first )
			{
				first = false;
				rt = result = temp1;
				result->next = tra;
				result = tra;
			}
			else
			{
				result->next = temp1;
				temp1->next = tra;
				result = tra;
				
			}
			tra = temp2;			
		}
		if(first)
			rt = result;
		else
			result->next = tra;
		
			
		return rt;
        
    }
};

