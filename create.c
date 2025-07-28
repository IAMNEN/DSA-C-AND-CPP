#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *newnode, *temp;

void create()
{
    int n;
    printf("How many nodes do you want to create? ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data:");
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
    printf("Node created successfully.\n");
}

void display()
{
    temp = head;
    printf("Linked List: ");
    while (temp)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1.Create Node\n2.Exit\n3.Display List\n");
        printf("\nEnter Your Choice:");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            printf("Exiting...\n");
            exit(0);

        case 3:
            display();
            break;
        }
    }
    return 0;
}