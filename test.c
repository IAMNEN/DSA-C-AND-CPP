#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

struct Node * head = NULL;

void create(int value){
    if (head != NULL){
        printf("List already created.\n");
        return;
    }
    struct Node * newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    head = newnode;
    printf("List created with value %d.\n", value);
}

void insertAtBegining(int value){
    struct Node * newnode =(struct Node *)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next = head;
    head = newnode;
    printf("Inserted %d at the beginning.\n", value);
}

void insertAtEnd(int value){
    struct Node * newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }else{
        struct Node * temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next=newnode;
    }
    printf("Inserted %d at the end.\n", value);
}
void display(){
    if(head == NULL){
        printf("List is empty.\n");
        return;
    }
    struct Node * temp = head;
    printf("Linked List: ");
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void main(){
    int choice, value;

    while(1){
        printf("\n--- Menu ---\n");
        printf("1. Create List\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter value to create list: ");
                scanf("%d", &value);
                create(value);
                break;
            case 2:
                printf("Enter value to insert at beginning: ");
                scanf("%d", &value);
                insertAtBegining(value);
                break;
            case 3:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}