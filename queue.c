// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #define size 5

// int queue[size], front = -1, rear = -1;

// void Enqueue()
// {
//     if ((rear + 1) % size == front)
//         printf("Queue is full");
//     else
//     {
//         int data;
//         printf("Enter Data ->");
//         scanf("%d", &data);

//         if (front == -1)
//             front = 0;
//         rear = (rear + 1) % size;
//         queue[rear] = data;
//     }
// }

// void dequeue()
// {
//     printf("\nDeleted",queue[front]);
//     front=front+1%size;
// }

// void display()
// {
//     if (front == -1)
//         printf("\nQueue is Empty\n");
//     else
//     {
//         printf("\nQueue: ");
//         int i = front;
//         while (1)
//         {
//             printf("%d ", queue[i]);
//             if (i == rear)
//                 break;
//             i = (i + 1) % size;
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int choice;
//     while (1)
//     {
//         printf("\n1. ENQUEUE 2. DEQUEUE 3. DISPLAY 4. EXIT\n");
//         printf("Enter choice: ");
//         scanf("%d", &choice);
//         if (choice == 1)
//             Enqueue();
//         else if (choice == 2)
//             dequeue();
//         else if (choice == 3)
//             display();
//         else if (choice == 4)
//             break;
//         else
//             printf("\nInvalid Choice\n");
//     }
// }
#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue() {
    if (rear == SIZE - 1)
        printf("\nQueue Overflow\n");
    else {
        printf("Enter data: ");
        scanf("%d", & queue[++rear] );
        if (front == -1) front = 0;
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        printf("\nQueue Underflow\n");
    else
        printf("\nDequeued: %d\n", queue[front++]);
}

void display() {
	int i;
    if (front == -1 || front > rear)
        printf("\nQueue is Empty\n");
    else {
        printf("\nQueue: ");
	for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

void main() {
    int choice;
    while (1) {
	printf("\n1. ENQUEUE  2. DEQUEUE  3. DISPLAY  4. EXIT\n");
	printf("Enter choice: ");
	scanf("%d", &choice);
switch(choice)
{

	case  1: enqueue();
		break;
	case 2: dequeue();
		break;
	case 3: display();
		break;
	case 4: exit(0);
	default: printf("\nInvalid Choice\n");
    }
}
}

