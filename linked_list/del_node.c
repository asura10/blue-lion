#include "linked_list.h"


int
del_num(NODE head, int num) {
        //search for the node
        NODE cur = head;
        NODE prev = NULL;
        while(cur->link != NULL && cur->item != num) {
                prev = cur;
                cur = cur -> link;
        }
        if(cur->link == NULL) {
                return FAILED;
        }

        //link past the node
        prev->link = cur->link;

        //free the node
        free(cur);
        return SUCCESS;
}

