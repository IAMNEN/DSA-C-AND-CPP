#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};
// Main function to test the list
int main() {
    struct Node * head =malloc(sizeof(struct Node));
    head->data = 45;
    head->next = NULL; 

    struct Node * current =malloc(sizeof(struct Node));
    current->data = 98;
    current->next = current;

    printf("%d\n",head->data);
    printf("%d",current->data);

    return 0;
}
