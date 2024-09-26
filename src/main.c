#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void) {
    LinkedList* list = ll_init();
    ll_insert_end(list, 1);
    ll_insert_end(list, 2);
    ll_insert_end(list, 3);
    ll_insert_end(list, 4);
    ll_insert_start(list, 5);
    ll_delete_first(list);
    ll_insert_start(list, 6);
    ll_delete_last(list);

    printf("Length: %d\n", ll_length(list));
    int* result = ll_dump(list);
    for (int i = 0; i < ll_length(list); i++) {
        printf("Value: %d\n", result[i]);
    }
    free(result);
    free(list);

    return 0;
}