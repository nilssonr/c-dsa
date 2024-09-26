#include "linked_list.h"

#include <stdio.h>
#include <stdlib.h>

void insert_start(linked_list *list, int value) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->value = value;
    new_node->next = list->head;
    list->head = new_node;

    if (list->length == 0) {
        list->tail = new_node;
    }

    list->length++;
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

void delete_first(linked_list *list) {
    if (list->length == 0) {
        return;
    }

    node *old_node = list->head;
    list->head = old_node->next;

    if (list->head == NULL) {
        list->tail = NULL;
    }

    list->length--;
    free(old_node);
}

void delete_last(linked_list *list) {
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

    node *current = list->head;
    while (current->next != list->tail) {
        current = current->next;
    }

    free(list->tail);
    current->next = NULL;
    list->tail = current;
    list->length--;
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