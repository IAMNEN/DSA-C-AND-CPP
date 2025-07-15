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
    current->next = NULL;
    head->next = current;

    current = malloc(sizeof(struct Node));
    current->data = 23;
    current->next = NULL;

    head->next->next = current;

    printf("%d\n",head->data);
    printf("%d\n",head->next->data);
    printf("%d\n",head->next->next->data);

    return 0;
}