#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int value;
    struct _node *next;
} node;

void printLinkedList(node* node);

int main(void)
{
    node a, b, c, d;
    a.value = 1; b.value = 2; c.value = 3; d.value = 4;
    a.next = &b; b.next = &c; c.next = &d; d.next = NULL;

    printLinkedList(&a);
}

void printLinkedList(node* node){
    if(node == NULL)
        return;
    printf("Node value: %d\n",(*node).value);
    printLinkedList((*node).next);
}