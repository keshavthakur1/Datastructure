#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* first = NULL;

void create(int A[], int n) {
    int i;
    struct Node* t, * last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node* p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void deleteNode(struct Node** head, int index) {
    if (*head == NULL)
        return;

    struct Node* temp = *head;

    if (index == 0) {
        *head = temp->next;
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    int i = 0;
    while (temp != NULL && i < index) {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

int main() {
    int A[] = { 10, 20, 30, 40, 50 };
    create(A, 5);

    printf("Linked list before deletion: ");
    display(first);

    deleteNode(&first, 2);

    printf("Linked list after deletion: ");
    display(first);

    return 0;
}
