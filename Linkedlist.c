#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

int count_of_nodes(struct Node* head) {
    int count =0;
    if (head == NULL){
        printf("List is empty\n");
        return count;
    }
    struct Node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++;
        ptr = ptr->next;
    }
    printf("Count of nodes in the list: %d\n", count);
    return count;

}
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

    count_of_nodes(head);

    return 0;
}