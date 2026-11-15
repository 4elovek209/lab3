#ifndef STACK_H
#define STACK_H

#include <stddef.h>

typedef struct {
    int value;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
    size_t size;
} Stack;

void stack_init(Stack *stack);
int stack_push(Stack *stack, int value);
int stack_pop(Stack *stack, int *value);
int stack_is_empty(Stack *stack);
void stack_print(Stack *stack);
void stack_clear(Stack *stack);

#endif