#include <stdio.h>

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
    dump(&list);

    return 0;
}