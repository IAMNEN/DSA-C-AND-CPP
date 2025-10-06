#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp = NULL;
struct node *newnode = NULL;

void multipalnode(){
    int no,i;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &no);
    for (i=0;i<no;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
        } else {
            temp = head;
            while(temp->next){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}

void display(){
    printf("linked list: ");
    temp = head;
    while(temp){
        printf("%d ->", temp->data);
        temp = temp->next;
    }
}

void insertatbeginning(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}

void insertAtEnd(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;
    temp=head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertatposition(){
    int pos,i;
    printf("Enter the position to insert the node: ");
    scanf("%d", &pos);

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if(pos==1){
        newnode->next = head;
        head = newnode;
    } else {
        temp = head;
        for(i=1; i<pos-1 && temp!=NULL; i++){
            temp = temp->next;
        }
        if(temp == NULL){
            printf("Position out of bounds.\n");
            free(newnode);
            return;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void deletenode(){
    temp=head;
    if(head == NULL){
        printf("List is empty.\n");
        return; 
    }
    else{
        head = head->next;
        free(temp);
    }
}

void deleteatend(){
    if(head == NULL){
        printf("List is empty.\n");
        return;
    }
    temp = head;
    if(temp->next == NULL){
        free(temp);
        head = NULL;
        return;
    }
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void count(){
    int count = 0;
    temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }
    printf("Total nodes in the list: %d\n", count);
}

int main(){
    
    int choice, value;

    while(1){
        printf("\n1. Create multiple nodes\n");
        printf("2. Display the list\n");
        printf("3. Insert at beginning\n");
        printf("4. Insert at end\n");
        printf("5. Insert at position\n");
        printf("6. Delete node from beginning\n");
        printf("7. Delete node from end\n");
        printf("8. Count nodes\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                multipalnode();
                break;
            case 2:
                display();
                break;
            case 3:
                insertatbeginning();
                break;
            case 4:
                insertAtEnd();
                break;
            case 5:
                insertatposition();
                break;
            case 6:
                deletenode();
                break;
            case 7:
                deleteatend();
                break;
            case 8:
                count();
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}