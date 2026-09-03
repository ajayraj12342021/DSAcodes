#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Display linked list
void display(struct Node *head) {
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Delete from beginning
void deleteBeginning(struct Node **head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = *head;

    *head = (*head)->next;

    free(temp);

    printf("First node deleted\n");
}

// Delete from end
void deleteEnd(struct Node **head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = *head;

    if (temp->next == NULL) {
        *head = NULL;
        free(temp);
        printf("Last node deleted\n");
        return;
    }

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    struct Node *last = temp->next;

    temp->next = NULL;

    free(last);

    printf("Last node deleted\n");
}

// Delete from specific position
void deletePosition(struct Node **head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (position <= 0) {
        printf("Invalid position\n");
        return;
    }

    if (position == 1) {
        deleteBeginning(head);
        return;
    }

    struct Node *temp = *head;

    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position does not exist\n");
        return;
    }

    struct Node *deleteNode = temp->next;

    temp->next = deleteNode->next;

    free(deleteNode);

    printf("Node at position %d deleted\n", position);
}

// Delete by value
void deleteValue(struct Node **head, int value) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    if ((*head)->data == value) {
        deleteBeginning(head);
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL &&
           temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Value not found\n");
        return;
    }

    struct Node *deleteNode = temp->next;

    temp->next = deleteNode->next;

    free(deleteNode);

    printf("Value %d deleted\n", value);
}

int main() {

    struct Node *head = NULL;

    // Creating nodes
    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node));
    struct Node *n3 = malloc(sizeof(struct Node));
    struct Node *n4 = malloc(sizeof(struct Node));

    n1->data = 10;
    n1->next = n2;

    n2->data = 20;
    n2->next = n3;

    n3->data = 30;
    n3->next = n4;

    n4->data = 40;
    n4->next = NULL;

    head = n1;

    printf("Original list:\n");
    display(head);

    deleteBeginning(&head);

    printf("After deletion from beginning:\n");
    display(head);

    deleteEnd(&head);

    printf("After deletion from end:\n");
    display(head);

    deletePosition(&head, 2);

    printf("After deletion from position 2:\n");
    display(head);

    return 0;
}