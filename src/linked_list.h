#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>

// Define a node in the linked list
// 'value' stores the data of the node
// 'next' points to the next node in the list
typedef struct dsa_linked_list_node_t {
  int value;                            // The value stored in the node
  struct dsa_linked_list_node_t *next;  // Pointer to the next node
} dsa_linked_list_node_t;

// Define the linked list structure
// 'length' keeps track of the number of nodes in the list
// 'head' points to the first node in the list
// 'tail' points to the last node in the list
typedef struct {
  int length;                    // Number of elements (nodes) in the list
  dsa_linked_list_node_t *head;  // Pointer to the first node
  dsa_linked_list_node_t *tail;  // Pointer to the last node
} dsa_linked_list_t;

// Function to initialize a new linked list
// Returns a pointer to an empty linked list with length 0
dsa_linked_list_t *dsa_linked_list_init();

// Function to insert a node with a given value at the start of the list
// Updates the head to point to the new node
void dsa_linked_list_insert_start(dsa_linked_list_t *list, int value);

// Function to insert a node with a given value at the end of the list
// Updates the tail to point to the new node
void dsa_linked_list_insert_end(dsa_linked_list_t *list, int value);

// Function to delete the first node in the list
// Updates the head to point to the next node, effectively removing the first
// node
void dsa_linked_list_delete_first(dsa_linked_list_t *list);

// Function to delete the last node in the list
// Updates the tail to the second last node, removing the last node
void dsa_linked_list_delete_last(dsa_linked_list_t *list);

// Function to return the length of the list
// Returns the number of nodes (elements) in the list
int dsa_linked_list_length(dsa_linked_list_t *list);

// Function to dump the list values into an array
// Returns a pointer to a dynamically allocated array containing all values in
// the list
int *dsa_linked_list_dump(dsa_linked_list_t *list);

#endif