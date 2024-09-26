#include "linked_list.h"

#include <stdio.h>
#include <stdlib.h>

dsa_linked_list_t *dsa_linked_list_init() {
  dsa_linked_list_t *list =
      (dsa_linked_list_t *)malloc(sizeof(dsa_linked_list_t));
  list->head = NULL;
  list->tail = NULL;
  list->length = 0;

  return list;
}

void dsa_linked_list_insert_start(dsa_linked_list_t *list, int value) {
  dsa_linked_list_node_t *new_node =
      (dsa_linked_list_node_t *)malloc(sizeof(dsa_linked_list_node_t));
  new_node->value = value;
  new_node->next = list->head;
  list->head = new_node;

  if (list->length == 0) {
    list->tail = new_node;
  }

  list->length++;
}

void dsa_linked_list_insert_end(dsa_linked_list_t *list, int value) {
  dsa_linked_list_node_t *new_node =
      (dsa_linked_list_node_t *)malloc(sizeof(dsa_linked_list_node_t));
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

void dsa_linked_list_delete_first(dsa_linked_list_t *list) {
  if (list->length == 0) {
    return;
  }

  dsa_linked_list_node_t *old_node = list->head;
  list->head = old_node->next;

  if (list->head == NULL) {
    list->tail = NULL;
  }

  list->length--;
  free(old_node);
}

void dsa_linked_list_delete_last(dsa_linked_list_t *list) {
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

  dsa_linked_list_node_t *current = list->head;
  while (current->next != list->tail) {
    current = current->next;
  }

  free(list->tail);
  current->next = NULL;
  list->tail = current;
  list->length--;
}

int dsa_linked_list_length(dsa_linked_list_t *list) { return list->length; }

int *dsa_linked_list_dump(dsa_linked_list_t *list) {
  dsa_linked_list_node_t *current = list->head;
  int *result = (int *)malloc(list->length * sizeof(int));
  int i = 0;

  while (current != NULL) {
    result[i] = current->value;
    current = current->next;
    i++;
  }

  return result;
}