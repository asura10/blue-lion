#include "linked_list.h"

main() {
        NODE head;
        int num = 2;
        head = create_dummy_list(NO_FLAG);
        //del_num(head,num);
        //print_list(head);
	/*
        if(is_palindrome(head)) {
                printf("PALINDROME\n");
        } else {
                printf("NOT palindrome\n");
        }
        */
        //swap_kth_elements(head,0);   
        /* 
        if(detect_loop(head)) {
                printf("loop detected\n");
        } else {
                printf("loop not detected\n");
        }
	*/
	head = reverse_k_nodes(head,7);
	print_list(head);
}
