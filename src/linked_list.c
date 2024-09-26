#include "linked_list.h"

#include <stdio.h>
#include <stdlib.h>

LinkedList *ll_init() {
    LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    list->length = 0;

    return list;
}

void ll_insert_start(LinkedList *list, int value) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->value = value;
    new_node->next = list->head;
    list->head = new_node;

    if (list->length == 0) {
        list->tail = new_node;
    }

    list->length++;
}

void ll_insert_end(LinkedList *list, int value) {
    Node *new_node = (Node *)malloc(sizeof(Node));
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

void ll_delete_first(LinkedList *list) {
    if (list->length == 0) {
        return;
    }

    Node *old_node = list->head;
    list->head = old_node->next;

    if (list->head == NULL) {
        list->tail = NULL;
    }

    list->length--;
    free(old_node);
}

void ll_delete_last(LinkedList *list) {
    if (list->length == 0) {
        return;
    }

    if (list->head == list->tail) {
        free(list->head);
        list->head = NULL;
        list->tail = NULL;
        list->length = 0;
        return;
    }

    Node *current = list->head;
    while (current->next != list->tail) {
        current = current->next;
    }

    free(list->tail);
    current->next = NULL;
    list->tail = current;
    list->length--;
}

int ll_length(LinkedList *list) {
    return list->length;
}

int *ll_dump(LinkedList *list) {
    Node *current = list->head;
    int *result = (int *)malloc(ll_length(list) * sizeof(int));
    int i = 0;

    while (current != NULL) {
        result[i] = current->value;
        current = current->next;
        i++;
    }

    return result;
}