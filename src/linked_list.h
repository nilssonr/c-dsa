#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

typedef struct LinkedList {
    int length;
    Node *head;
    Node *tail;
} LinkedList;

LinkedList *ll_init();
void ll_insert_start(LinkedList *list, int value);
void ll_insert_end(LinkedList *list, int value);
void ll_delete_first(LinkedList *list);
void ll_delete_last(LinkedList *list);
int ll_length(LinkedList *list);
int *ll_dump(LinkedList *list);

#endif