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
    ListNode* deleteDuplicates(ListNode* head) {
		if( head == NULL)
			return NULL;

		ListNode* last =  head;
		ListNode* tra = head->next, *temp;
		while( tra )
		{
			if( last->val == tra->val )
			{
				temp = tra->next;
				last->next = tra->next;
				delete tra;
				tra = temp;
			}
			else
			{
				last = tra;
				tra = tra->next;
			}
		}

		return head;
        
    }
};

