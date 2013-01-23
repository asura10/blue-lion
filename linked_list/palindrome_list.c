#include "linked_list.h"
#include <stdlib.h>
#include <stdbool.h>


NODE
reverse_list(NODE node) {
	NODE cur = node;
	NODE prev = NULL;
	NODE next = node->link;
	while (next != NULL) {
		printf("cur %d\n",cur->item);
		cur->link = prev;
		prev = cur;
		cur = next;
		next = next->link ;
	} 
	cur->link = prev;
	printf( "\nreversed list %d\n",node->item);
	print_list(cur);
	return cur;	
}

int
is_palindrome(NODE head) {
	NODE first = head;
	NODE second = head;

//till second hits the end increment first once and second twice
	while(second ->link !=NULL && second ->link ->link != NULL) {
		first = first ->link;
		second = second -> link->link;
	/*	if(second == NULL) {
			break;
		}	
	*/
	}

	reverse_list(first);
	second = first;
	first = head;	
// compare first and second part of the linked list
	while(first->item == second -> item & second->link != NULL) {
		first = first->link;
		second = second->link;
	}
	
	if(second->link == NULL) {
		return 0;
	} else {
		return 1;
	} 

}
