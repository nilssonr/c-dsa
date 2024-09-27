#ifndef DSA_STACK_H
#define DSA_STACK_H

// Define the stack structure
// 'items' is a pointer to the array that will store the stack elements
// 'size' represents the current number of elements in the stack
// 'capacity' is the maximum number of elements the stack can hold
typedef struct {
    int *items;    // Dynamic array to hold stack elements
    int size;      // Number of elements currently in the stack
    int capacity;  // Maximum number of elements the stack can hold
} dsa_stack_t;

// Function to initialize a stack with a specified capacity
// Allocates memory for the stack and initializes the stack properties
dsa_stack_t *dsa_stack_init(int capacity);

// Function to check if the stack is full
// Returns 1 if the stack is full, 0 otherwise
int dsa_stack_is_full(dsa_stack_t *stack);

// Function to check if the stack is empty
// Returns 1 if the stack is empty, 0 otherwise
int dsa_stack_is_empty(dsa_stack_t *stack);

// Function to push an element onto the stack
// If the stack is not full, the value is added to the top of the stack
void dsa_stack_push(dsa_stack_t *stack, int value);

// Function to pop an element from the stack
// Removes and returns the top element if the stack is not empty
int dsa_stack_pop(dsa_stack_t *stack);

// Function to peek at the top element of the stack without removing it
// Returns the top element of the stack
int *dsa_stack_peek(dsa_stack_t *stack);

void dsa_stack_dump(dsa_stack_t *stack);

#endif