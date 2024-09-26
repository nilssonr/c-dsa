#ifndef STACK_H
#define STACK_H

typedef struct Stack {
    int *items;
    int size;
} Stack;

Stack *stack_init(int size);
void stack_push(Stack *stack, int value);
int stack_pop(Stack *stack);

#endif