#include "linked_list.h"

NODE
get_node() {
	return (NODE)malloc(sizeof(struct node));
}

void
print_list(NODE head) {
                NODE cur = head;
                while(cur->link!= NULL) {
                          printf("%d ->",cur->item);
                          cur = cur->link;
                }
		printf("%d\n",cur->item);
}

NODE
create_dummy_list(int flag) {
	NODE new_node= NULL;
    	NODE root;
	NODE loop_start_node=NULL;
	int i=0;
	NODE tail = NULL;
	if(NUMBER_OF_NODES < LOOP_SIZE) {
		ASSERT();
	}
	for(i=0;i<NUMBER_OF_NODES;i++) {
		//allocate
		new_node = get_node();
		if(new_node == NULL) {
			ASSERT();
		}
		//assign number
		new_node->item = i;
		new_node->link = NULL;
		if(flag == LOOP && i == LOOP_SIZE-1) {
			loop_start_node = new_node;
		}
		if(tail != NULL) {
			//link to tail
			tail->link = new_node;
			tail = tail->link;
		} else {
			tail = new_node;
			root = tail;	
		}
	}
	if(flag == LOOP) {
		tail->link = loop_start_node;
	} 
	return root;
}

