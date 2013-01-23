#include "linked_list.h"

NODE 
reverse_k_nodes(NODE head,int k)
{
	NODE prev = NULL;
	NODE cur=head;
	NODE next;
	int count = 0;
	if(1==k || 0==k) {
		return NULL;
	}
	
	if(k <0) {
		ASSERT();
	} 
	next = cur->link;

	while (count < k && cur->link!= NULL) {
		cur->link = prev;
		prev = cur;
		cur = next;
		next = next->link;
		count ++;
	}
        if(cur->link!=NULL) {
		head->link=cur;
		return prev;
	} else {
		ASSERT();
	}
}


