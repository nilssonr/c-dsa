#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

dsa_stack_t *dsa_stack_init(int capacity) {
    dsa_stack_t *stack = (dsa_stack_t *)malloc(sizeof(dsa_stack_t));
    stack->items = (int *)malloc(capacity * sizeof(int));
    stack->capacity = capacity;
    stack->size = 0;

    return stack;
}

int dsa_stack_is_full(dsa_stack_t *stack) {
    return stack->capacity == stack->size;
}

int dsa_stack_is_empty(dsa_stack_t *stack) {
    return stack->size == 0;
}

void dsa_stack_push(dsa_stack_t *stack, int value) {
    if (dsa_stack_is_full(stack)) {
        return;
    }

    stack->items[stack->size] = value;
    stack->size++;
}

int dsa_stack_pop(dsa_stack_t *stack) {
    if (dsa_stack_is_empty(stack)) {
        return 0;  // Stack is empty
    }

    // Get the top element
    int value = stack->items[stack->size - 1];

    // Decrease the size to remove the element
    stack->size--;
    stack->items[stack->size] = 0;

    return value;  // Return the popped element
}

int *dsa_stack_peek(dsa_stack_t *stack) {
    if (dsa_stack_is_empty(stack)) {
        return NULL;
    }

    return &stack->items[stack->size - 1];
}

void dsa_stack_dump(dsa_stack_t *stack) {
    for (int i = 0; i < stack->capacity; i++) {
        printf("%d: %d\n", i, stack->items[i]);
    }
}