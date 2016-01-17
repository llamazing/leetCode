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
		 ListNode* insertionSortList(ListNode* head) {
			 ListNode* ht = new ListNode(0), *i, *j, *last, *ne, *lasti;
			 if( head == NULL )
				 return NULL;
			 ht->next = head;
			 i = head->next;
			 lasti = head;
			 bool exchange = false;
			 while( i != NULL)
			 {
				 ne = i->next;
				 last = ht;
				 j = ht->next;
				 while(j != i)
				 {
					 if( (j->val) > (i->val))
					 {
						 last->next = i;
						 lasti->next = i->next;
						 i->next = j;
						 exchange = true;
						 break;
					 }
					 last = j;
					 j = j->next;
				 }
				 if(!exchange)
				 {
					 lasti = lasti->next;
				 }
				 i = ne;
				 exchange = false;
			 
			 }
	 
			 return ht->next;
			 
			 
		 }
	 };


