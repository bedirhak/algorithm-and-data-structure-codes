#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node** head_ref, int new_data) {
	// Allocate memory for new node
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	// Set the data of the new node
	new_node->data = new_data;
	// Set the next of the new node as current head
	new_node->next = *head_ref;
	// Move the head to point to the new node
	*head_ref = new_node;
}

// Function to print all elements of the linked list
void printList(struct Node* node) {
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
	printf("\n");
}

// Function to search for a specific element in the linked list
struct Node* search(struct Node* head, int key) {
	struct Node* current = head;
	// Traverse the list until current becomes NULL (end of list)
	while (current != NULL) {
		// If key is found, return the current node
		if (current->data == key) {
			return current;
		}
		// Move to the next node
		current = current->next;
	}
	// If key is not found, return NULL
	return NULL;
}

void deleteNode(struct Node** head_ref, int key) {
	// Store head node
	struct Node* temp = *head_ref, *prev = NULL;

	// If head node itself holds the key to be deleted
	if (temp != NULL && temp->data == key) {
		*head_ref = temp->next; // Changed head
		free(temp); // free old head
		return;
	}

	// Search for the key to be deleted, keep track of the
	// previous node as we need to change 'prev->next'
	while (temp != NULL && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}

	// If key was not present in linked list
	if (temp == NULL) return;

	// Unlink the node from linked list
	prev->next = temp->next;

	free(temp); // Free memory
}

int main() {
	// Initialize an empty linked list
	struct Node* head = NULL;

	// Insert some elements into the linked list
	insertAtBeginning(&head, 5);
	insertAtBeginning(&head, 10);
	insertAtBeginning(&head, 15);

	// Print the linked list
	printf("Linked list elements: ");
	printList(head);

	// Search for an element in the linked list
	int key = 10;
	struct Node* result = search(head, key);
	if (result != NULL) {
		printf("%d found in the linked list.\n", key);
	}
	else {
		printf("%d not found in the linked list.\n", key);
	}

	return 0;
}
