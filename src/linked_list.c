#include "linked_list.h"

#include <stdio.h>
#include <stdlib.h>

void insert_start(linked_list *list, int value) {
}

void insert_end(linked_list *list, int value) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->value = value;
    new_node->next = NULL;

    if (list->length == 0) {
        list->head = new_node;
        list->tail = new_node;
    } else {
        list->tail->next = new_node;
        list->tail = new_node;
    }

    list->length++;
}

int length(linked_list *list) {
    return list->length;
}

int *dump(linked_list *list) {
    node *current = list->head;
    int *result = (int *)malloc(length(list) * sizeof(int));
    int i = 0;

    while (current != NULL) {
        result[i] = current->value;
        current = current->next;
        i++;
    }

    return result;
}