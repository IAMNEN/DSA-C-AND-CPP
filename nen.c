#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // Corrected struct name to match 'Node'
};

struct Node *head = NULL;

// Function to create a linked list
void create(int dummyValue) // dummyValue is not used
{
    int no, i;
    struct Node *temp, *newnode;

    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &no);

    for (i = 0; i < no; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        if (!newnode)
        {
            printf("Memory allocation failed\n");
            return;
        }

        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        { // Corrected condition (was using = instead of ==)
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

// Insert node at the beginning
void insertAtBeginning(int value)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
    printf("Inserted %d at the beginning.\n", value);
}

// Insert node at the end
void insertAtEnd(int value)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    printf("Inserted %d at the end.\n", value);
}

// Display the list
void display()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main menu function
int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- Menu ---\n");
        printf("1. Create List\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create(0); // dummy value
            break;
        case 2:
            printf("Enter value to insert at beginning: ");
            scanf("%d", &value);
            insertAtBeginning(value);
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

    return 0;
}
