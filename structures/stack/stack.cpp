#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
	int items[MAX_SIZE];
	int top;
};

// Function to initialize the stack
void initializeStack(struct Stack *stack) {
	stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
	return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
	return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value) {
	if (isFull(stack)) {
		printf("Stack Overflow\n");
		return;
	}
	//stack->items[++stack->top] = value;

	(*stack).items[++(*stack).top] = value;
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
	if (isEmpty(stack)) {
		printf("Stack Underflow\n");
		exit(EXIT_FAILURE);
	}
	return stack->items[stack->top--];
}

// Function to return the top element of the stack without removing it
int peek(struct Stack *stack) {
	if (isEmpty(stack)) {
		printf("Stack is empty\n");
		exit(EXIT_FAILURE);
	}
	return stack->items[stack->top];
}

int main() {
	struct Stack stack;
	initializeStack(&stack);

	push(&stack, 10);
	push(&stack, 20);
	push(&stack, 30);

	printf("Top element: %d\n", peek(&stack));

	printf("Popped element: %d\n", pop(&stack));
	printf("Popped element: %d\n", pop(&stack));
	printf("Popped element: %d\n", pop(&stack));

	printf("Is stack empty? %s\n", isEmpty(&stack) ? "Yes" : "No");

	return 0;
}
