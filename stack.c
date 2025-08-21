#include <stdio.h>
#include <stdlib.h>

int a[7];
int top = -1;

void push()
{
    int x;
    int no;
    printf("Enter the Number of element to be pushed: ");
    scanf("%d", &no);
    for (int i = 1; i <= no; i++)
    {
        printf("Enter Data %d->", i);
        scanf("%d", &x);
        if (top == 6)
        {
            printf("Stack is full\n");
            return;
        }
        else
        { 
            top++;
            a[top] = x;
        }
    }
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
        printf("%d ->", a[i]);
    }
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