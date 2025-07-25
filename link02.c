#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node * head=NULL;
struct node * newnode,*temp;

void create(){
    newnode = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        printf("List already created.\n");
        return;
    }
    printf("Enter Data ->");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }else{
        temp=head;
        while(temp->next != NULL)
            temp=temp->next;
            temp->next = newnode;
    }
}

int main(){
    create();
    return 0;
}