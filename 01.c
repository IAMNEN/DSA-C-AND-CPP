#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node * head = NULL;
struct node * temp,*newnode;

void create(){
    int n;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d", &newnode->data);
    newnode->next =NULL;
    
    if(head == NULL){
        head = newnode;
    }else{
        temp=head;
       while(temp->next){
            temp = temp->next;
       }
    }
    temp->next = newnode;
    printf("Data inserted successfully.\n");
 }
}

void display(){
    printf("Liked List:");
    temp=head;
    while(temp->data){
        printf("%d",temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice;
    while(1){
    printf("Enter Your choice:\n");
    printf("\n1.Create\n2.Display\n3.Exit");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
    }
    return 0;
}