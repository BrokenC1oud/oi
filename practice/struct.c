#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node * next;
    int value;
} Node;

int main() {
    Node *head = malloc(sizeof(Node));
    Node *child = malloc(sizeof(Node));
    head->next = child;
    child->next = nullptr;
    child->value = 1;
    printf("%d\n", head->next->value);

    free(head);
    free(child);

    return 0;
}
