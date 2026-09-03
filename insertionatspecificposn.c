#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertAtPosition(struct Node **head, int data, int position) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    // Insert at beginning
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    // Move to node before the position
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    insertAtPosition(&head, 10, 1);
    insertAtPosition(&head, 20, 2);
    insertAtPosition(&head, 30, 3);
    insertAtPosition(&head, 25, 3);

    display(head);

    return 0;
}