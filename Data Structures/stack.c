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

void printStack(node* node);

int main(void)
{
    //Get number of Stack elements,
    int n;

    // Read all stack elements and push them


    // Create User input screen
    // 1. Print all stack elements in order
    // 2. Push element to stack
    // 3. Pop element
    // printf("\t\t---Welcome to the Stack program---\n");
    // printf("1. Print Stack \t 2.Push element \t 3. Pop element \t 4. Quit program\n");
    int x = 0;

    // while(1){
    //     x = scanf("Choose your option");
    //     switch (x)
    //     {
    //     case 1:
    //         printf("Printing stack\n");

    //     case 2:
    //         printf("Pushing element in stack!!\n");

    //     case 3:
    //         printf("Pop element in the stack\n");

    //     case 4:
    //         printf("Exiting program!\n");
    //         break;

    //     default:
    //         printf("Incorrect option\n");
    //         break;
    //     }
    // }

    
    // scanf("Choose your option: %d", &x);
    // printf("%d",x);
    printf("Program Exited");
}

void printStack(node* node){
    if(node == NULL)
        return;
    printf("Node value: %d\n",(*node).value);
    printStack((*node).next);
}