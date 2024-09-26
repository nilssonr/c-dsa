#include "stack.h"

#include <stdlib.h>

Stack *stack_init(int size) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->items = (int *)malloc(size * sizeof(int));

    return stack;
}

void stack_push(Stack *stack, int value) {
}

int stack_pop(Stack *stack) {
    return 1;
}