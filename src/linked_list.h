#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>

typedef struct node {
    int value;
    struct node *next;
} node;

typedef struct linked_list {
    int length;
    node *head;
    node *tail;
} linked_list;

void insert_start(linked_list *list, int value);
void insert_end(linked_list *list, int value);
void delete_first(linked_list *list);
void delete_last(linked_list *list);
int length(linked_list *list);
int *dump(linked_list *list);

#endif