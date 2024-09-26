#include "stack.h"

#include <stdlib.h>

dsa_stack_t *dsa_stack_init(int size) {
  dsa_stack_t *stack = (dsa_stack_t *)malloc(sizeof(dsa_stack_t));
  stack->items = (int *)malloc(size * sizeof(int));
  stack->size = size;

  return stack;
}

int dsa_stack_is_full(dsa_stack_t *stack) { return 1; }

int dsa_stack_is_empty(dsa_stack_t *stack) { return 1; }

void dsa_stack_push(dsa_stack_t *stack, int value) {}

int dsa_stack_pop(dsa_stack_t *stack) { return 1; }

int dsa_stack_peek(dsa_stack_t *stack) { return 1; }