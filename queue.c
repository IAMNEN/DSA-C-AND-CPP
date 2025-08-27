#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 5

int queue[size], front = -1, rear = -1;

void Enqueue()
{
    if ((rear + 1) % size == front)
        printf("Queue is full");
    else
    {
        int data;
        printf("Enter Data ->");
        scanf("%d", &data);

        if (front == -1)
            front = 0;
        rear = (rear + 1) % size;
        queue[rear] = data;
    }
}

void dequeue()
{
    if (front == -1)
        printf("\nQueue Underflow\n");
    else
    {
        printf("\nDequeued: %d\n", queue[front]);
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % size;
    }
}

void display()
{
    if (front == -1)
        printf("\nQueue is Empty\n");
    else
    {
        printf("\nQueue: ");
        int i = front;
        while (1)
        {
            printf("%d ", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1. ENQUEUE 2. DEQUEUE 3. DISPLAY 4. EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1)
            Enqueue();
        else if (choice == 2)
            dequeue();
        else if (choice == 3)
            display();
        else if (choice == 4)
            break;
        else
            printf("\nInvalid Choice\n");
    }
}