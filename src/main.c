#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"
#include "stack.h"

int main(void) {
    // dsa_linked_list_t* list = dsa_linked_list_init();
    // dsa_linked_list_insert_end(list, 1);
    // dsa_linked_list_insert_end(list, 2);
    // dsa_linked_list_insert_end(list, 3);
    // dsa_linked_list_insert_end(list, 4);
    // dsa_linked_list_insert_start(list, 5);
    // dsa_linked_list_delete_first(list);
    // dsa_linked_list_insert_start(list, 6);
    // dsa_linked_list_delete_last(list);

    // printf("Length: %d\n", dsa_linked_list_length(list));
    // int* result = dsa_linked_list_dump(list);
    // for (int i = 0; i < dsa_linked_list_length(list); i++) {
    //   printf("Value: %d\n", result[i]);
    // }
    // free(result);
    // free(list);

    dsa_stack_t* stack = dsa_stack_init(5);
    printf("Is full: %d\n", dsa_stack_is_full(stack));
    dsa_stack_dump(stack);

    dsa_stack_push(stack, 1);
    dsa_stack_push(stack, 2);
    dsa_stack_push(stack, 3);
    dsa_stack_push(stack, 4);
    dsa_stack_push(stack, 5);

    printf("\n");
    printf("Is full: %d\n", dsa_stack_is_full(stack));

    dsa_stack_dump(stack);
    printf("\n");

    printf("Peek: %d\n", *dsa_stack_peek(stack));
    printf("Pop: %d\n", dsa_stack_pop(stack));
    printf("\n");
    dsa_stack_dump(stack);
    printf("\n");

    return 0;
}