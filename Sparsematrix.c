#include <stdio.h>
#include <stdlib.h>

struct Node {
    int row;
    int col;
    int value;
    struct Node *next;
};

int main() {

    int matrix[4][4] = {
        {0, 0, 3, 0},
        {22, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 14, 0, 0}
    };

    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode;

  
    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {

            if (matrix[i][j] != 0) {

                newNode = (struct Node *)malloc(sizeof(struct Node));

                newNode->row = i;
                newNode->col = j;
                newNode->value = matrix[i][j];
                newNode->next = NULL;

                if (head == NULL) {
                    head = newNode;
                    temp = newNode;
                }
                else {
                    temp->next = newNode;
                    temp = newNode;
                }
            }
        }
    }

    
    printf("Row\tColumn\tValue\n");

    temp = head;

    while (temp != NULL) {

        printf("%d\t%d\t%d\n",
               temp->row,
               temp->col,
               temp->value);

        temp = temp->next;
    }

    return 0;
}