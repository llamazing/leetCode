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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* result, *reT;
		bool first = true;
		//ListNode* tra1 = l1, *tra2 = l2;
		while(l1 != NULL && l2 != NULL)
		{
			if( first )
			{
				if( l1->val < l2->val){
					reT = result = l1;
					l1 = l1->next;
				}
				else
				{
					reT = result = l2;
					l2 = l2->next;
				}
				first  = false;
				
				
			}
			else
			{
				if( l1->val < l2->val){
					result->next = l1;
					l1 = l1->next;
				}
				else
				{
					result->next = l2;
					l2 = l2->next;
				}
				result = result->next;
			}

		}
		if( l1)
		{
			if( first )
			{
				reT = result = l1;
				first = false;
			}
			else
				result->next = l1;
		}
		if( l2)
		{
			if( first )
			{
				reT = result = l2;
				first = false;
			}
			else
				result->next = l2;
		}

		return reT;
		
        
    }
};

