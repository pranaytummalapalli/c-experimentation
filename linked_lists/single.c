#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct{
    int value;
    struct node* next;
}node_t;

void printlist(node_t *head){
    node_t *temp = head;

    while(temp != NULL){
        printf("%d - ", temp->value);
    }
    printf("/n");
}

int main(int argc, char** argv){
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 43;
    n2.value = 23;
    n3.value = 3;

    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;

    printlist(head);

    return 0;

}