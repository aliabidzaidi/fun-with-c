#include <stdio.h>
#include <stdlib.h>

// Stack:
// Push: element insert at the beginning(head)
// Pop: element remove from the beginning(head)

typedef struct _node
{
    int value;
    struct _node *next;
} node;

node *head = NULL;

void printStack(node *currentNode);
void push(node **head, int val);
int pop(node **head);

int main(void)
{
    push(&head, 0);
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);

    printStack(head);

    int poppedValue = pop(&head);
    printf("Popped: %d\n", poppedValue);
    printStack(head);
}

void push(node **head, int val)
{
    node *new_node;
    new_node = (node *)malloc(sizeof(node));
    new_node->value = val;
    if (*head == NULL)
        new_node->next = NULL;
    else
        new_node->next = *head;
    *head = new_node;
}

int pop(node **head)
{
    if (*head == NULL){
        return -1;
    }
    node* next_node = (*head)->next;
    int headValue = (*head)->value;

    free(*head);
    *head = next_node;
    return headValue;
}

void printStack(node *currentNode)
{
    if (currentNode == NULL)
        return;
    printf("Node value: %d\n", currentNode->value);
    printStack(currentNode->next);
}
