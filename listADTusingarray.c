#include <stdio.h> 
#define MAX 100

int list[MAX], size = 0;

void insert(int x, int pos) {
    for (int i = size; i >= pos; i--)
        list[i] = list[i - 1];

    list[pos - 1] = x;
    size++;
}

void delete(int pos) {
    for (int i = pos - 1; i < size - 1; i++)
        list[i] = list[i + 1];

    size--;
}

void search(int x) {
    for (int i = 0; i < size; i++) {
        if (list[i] == x) {
            printf("Found at position %d\n", i + 1);
            return;
        }
    }
    printf("Not found\n");
}

void display() {
    for (int i = 0; i < size; i++)
        printf("%d ", list[i]);
    printf("\n");
}

int main() {
    insert(10, 1);
    insert(20, 2);
    insert(30, 3);

    printf("List: ");
    display();

    insert(25, 3);
    printf("After insertion: ");
    display();

    delete(2);
    printf("After deletion: ");
    display();

    search(25);

    return 0;
}