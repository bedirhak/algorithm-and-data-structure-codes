#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue {
	int items[MAX_SIZE];
	int front;
	int rear;
};

// Function to initialize the queue
void initializeQueue(struct Queue *queue) {
	queue->front = -1;
	queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *queue) {
	return queue->front == -1;
}

// Function to check if the queue is full
int isFull(struct Queue *queue) {
	return queue->rear == MAX_SIZE - 1;
}

// Function to push an element to the queue
void push(struct Queue *queue, int value) {
	if (isFull(queue)) {
		printf("Queue is full\n");
		return;
	}
	if (isEmpty(queue)) {
		queue->front = 0;
	}
	queue->items[++queue->rear] = value;
}

// Function to pop an element from the queue
int pop(struct Queue *queue) {
	if (isEmpty(queue)) {
		printf("Queue is empty\n");
		exit(EXIT_FAILURE);
	}
	int removedItem = queue->items[queue->front];
	if (queue->front == queue->rear) {
		queue->front = -1;
		queue->rear = -1;
	}
	else {
		queue->front++;
	}
	return removedItem;
}

int main() {
	struct Queue queue;
	initializeQueue(&queue);

	push(&queue, 10);
	push(&queue, 20);
	push(&queue, 30);

	printf("Popped item: %d\n", pop(&queue));
	printf("Popped item: %d\n", pop(&queue));
	printf("Popped item: %d\n", pop(&queue));

	return 10;
}
