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
    bool hasCycle(ListNode *head) {

		ListNode *temp = head;
		bool first = true;
		while( temp != head || first)
		{
			if( temp == NULL || head == NULL)
				return false;
			temp = temp->next;
			head = head->next;
			if( temp == NULL)
				return false;
			temp = temp->next;
			first = false;
		}
		
		return true;
        
    }
};

