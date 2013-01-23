#ifndef LINKED_LIST_LL
#define LINKED_LIST_LL

#include <stdio.h>
#include <stdlib.h>

#define ASSERT()\
	printf("ERROR!!!");\
	exit(0);

#define FAILED 0
#define SUCCESS 1
#define LOOP 1
#define NUMBER_OF_NODES 5
#define LOOP_SIZE 1
#define NO_FLAG 0

struct node {
	int item;
	struct node* link;
};

typedef struct node* NODE;

extern void
print_list(NODE head);

extern NODE 
create_dummy_list(int flag);

extern int
is_palindrome(NODE head);
#endif

