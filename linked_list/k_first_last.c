#include "linked_list.h"

int
swap_kth_elements(NODE head,int n) {
	//go to the first element 
	NODE prev_first = NULL;
	NODE cur_first = head;
	NODE prev_last = NULL;
	NODE cur_last_1_ptr = head ;
	NODE cur_last_2_ptr = head ;
	NODE temp = NULL;
	int count = 1,i=0;

	while (count < n && cur_first!= NULL) {
		count++;
		prev_first = cur_first;
		cur_first = cur_first->link;
	}
		
	if(cur_first == NULL ) {
		ASSERT();
	}

	//go to the last element
	for(i=0;i<n;i++) {
		cur_last_2_ptr = cur_last_2_ptr -> link;
	}
	while (cur_last_2_ptr != NULL) {
		cur_last_2_ptr = cur_last_2_ptr -> link;
		prev_last = cur_last_1_ptr;
		cur_last_1_ptr = cur_last_1_ptr -> link;
	}
	print_list(head);
	if(n == 1) {
                cur_last_1_ptr->link = cur_first->link;
		cur_first->link = NULL;
                prev_last->link= cur_first;
                head = cur_last_1_ptr;
		print_list(head);
		exit(0);
        } else if(n<=0) {
		ASSERT();
	}
	//swap the first and the last
	if(cur_last_1_ptr !=head) {
		temp = cur_first->link;
		prev_first->link = cur_last_1_ptr;
		cur_first->link = cur_last_1_ptr->link;
		prev_last->link= cur_first;
		cur_last_1_ptr->link =  temp;
	} 
}
