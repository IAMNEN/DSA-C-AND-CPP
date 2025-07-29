#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *temp, *newnode;

void create()
{
    int n, i;
    printf("Enter Number of Nodes You want :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}

void insertatbegining()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data :");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}

void insertatend()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data :");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void display()
{
    printf("\nlinked list: ");
    temp = head;
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

int main()
{
    int choice;
    while (1)
    {

        printf("\n1.Create\n2.Display\n3.Insert At Begining\n4.exit\n5.insert at End");
        printf("\nEnter Your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertatbegining();
            break;
        case 4:
            exit(0);
            break;
        case 5:
            insertatend();
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}