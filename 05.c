#include <stdio.h>
#include <stdlib.h>

int a[7];
int top = -1;

void push()
{
    top++;
    printf("Enter Data: ");
    scanf("%d", &a[top]);
}

void pop()
{
   printf("Popped Element is %d\n", a[top]);
   top--;
}

void peek()
{
    printf("Top Element is %d\n", a[top]);
}

void Display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d -> ", a[i]);
    }
    printf("NULL\n");
}

void main()
{
    int choice;
    while (1)
    {
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            Display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}

