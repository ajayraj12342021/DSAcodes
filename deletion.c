#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void deleteBeginning(struct Node **head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = *head;

    *head = (*head)->next;

    free(temp);

    printf("Node deleted from beginning\n");
}

int main() {
    struct Node *head = NULL;

    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node));
    struct Node *n3 = malloc(sizeof(struct Node));

    n1->data = 10;
    n1->next = n2;

    n2->data = 20;
    n2->next = n3;

    n3->data = 30;
    n3->next = NULL;

    head = n1;

    deleteBeginning(&head);

    return 0;
}