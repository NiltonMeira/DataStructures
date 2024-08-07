#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};
typedef struct  node node_t;

void printList(node_t *head) {
    node_t *temporary = head;

    while (temporary != NULL) {
        printf("%d - ", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t *create_new_node(int value) {
    node_t *result= malloc(sizeof(node_t));
}

int main(void) {
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;

    head = &n1;
    n3.next = NULL;
    n2.next = &n3;
    n1.next = &n2;

    node_t n4;
    n4.value = 13;
    n4.next = &n3;
    n2.next = &n4;

    printList(head);
    return 0;
}


