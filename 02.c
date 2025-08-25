#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *newnode;
struct node *temp;

void createList()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data ->");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void displayList()
{
    temp = head;
    printf("Linked List: ");
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertatbeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data ->");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}

void main()
{
    int choice;
    while (1)
    {
        printf("\n1. Create List\n");
        printf("2. Display List\n");
        printf("3. Insert at Beginning\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createList();
            break;
        case 2:

            displayList();
            break;
        case 3:
            insertatbeg();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice, please try again.\n");
        }
    }
}