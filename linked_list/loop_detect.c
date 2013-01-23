#include "linked_list.h"

int
detect_loop(NODE head)
{
	NODE hare = head;
	NODE tort = head;
	//till they meet increment hare and tort
	if(hare-> link == NULL || hare == NULL) {
		return 0;
	}
	
	
	do {
		hare = hare->link;
		hare = hare->link;
		tort = tort->link;
	} while( hare != tort && hare ->link!= NULL && hare ->link -> link != NULL);

	if(hare == tort) {
		return 1;
	} else {
		return 0;
	}
}

