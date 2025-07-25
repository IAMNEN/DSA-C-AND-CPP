#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp;
struct node *newnode;

void multipleNode()
{
    int no, i;
    printf("Enter the number you want to create node:");
    scanf("%d", &no);

    for (i = 0; i < no; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head = NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newnode;
        }
    }
}

void traverse()
{
    printf("Linked list:");
    temp = head;
    while (temp)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}

void insertAtBeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d", newnode->data);
    newnode->next = head;
    head = newnode;
}

void insertAtEnd()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertAtPosition()
{
    int pos, i;
    printf("Enter data:");
    scanf("%d", &pos);
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    temp = head;
    for (i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1.Create multiple node.\n2.\n\n\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            multipleNode();
            break;
        case 2:
            traverse();
            break;
        case 3:
            insertAtBeg();
            break;
        case 4:
            insertAtEnd();
            break;
        case 5:
            insertAtPosition();
            break;
        case 6:
            exit(0);
            break;

        default:
            printf(":Invalid:");
            break;
        }
    }
    return 0;
}