#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * head = NULL;
struct node * temp,*newnode;

void create(){
    int no;
    printf("Enter no You Want To Create Node ->");
    scanf("%d",&no);
    for(int i = 0;i<no;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data Values ->");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
        }
        else{
            temp = head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next = newnode;
        }
    }
}

void display(){
    temp = head;
    while(temp){
        printf("%d -> ",temp->data);
        temp=temp->next;

    }
    printf("NULL\n");
}

void insertatbeg(){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data Values ->");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
}

void insertatend(){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data ->");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        temp = head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next = newnode;
    }
}
void main(){
    printf("1. Create Node\n");
    printf("2. Display Node\n");
    printf("3. Exit\n");
    int choice;
    while(1){
        printf("Enter Your Choice -> ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
}