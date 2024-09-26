#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void) {
    linked_list list;
    list.head = NULL;
    list.tail = NULL;
    list.length = 0;

    insert_end(&list, 1);
    insert_end(&list, 2);
    insert_end(&list, 3);
    insert_end(&list, 4);

    printf("Length: %d\n", length(&list));
    int* result = dump(&list);
    for (int i = 0; i < length(&list); i++) {
        printf("Value: %d\n", result[i]);
    }
    free(result);

    return 0;
}