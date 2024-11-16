#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int main(){

struct node*head= NULL, *newnode, *temp,*prevnode;
int choice=1;

while(choice){
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d", &newnode->data);
    newnode->next=NULL;

    if(head==NULL){
        head= temp= newnode;
    }
    else{
        temp->next= newnode;
        temp= newnode;
    }
    printf("Do you want to continue(0/1)");
    scanf("%d", &choice);
}
temp= head;
printf("linked list:");
while(temp !=NULL){
    printf("%d->", temp->data);
    temp= temp->next;

}
printf("null\n");

//inserting new node from beginning
newnode=(struct node*) malloc(sizeof(struct node));
 printf("enter the data you want to  insert");
 scanf("%d", &newnode->data);
 newnode->next=head;
 head=newnode;
// displaying updated list
temp= head;
printf("updated list after inserting node from beginning:");
while(temp !=NULL){
    printf("%d->", temp->data);
    temp= temp->next;

}
printf("null\n");

// inserting node at the end of linked list
newnode=(struct node*) malloc(sizeof(struct node));
 printf("enter the data you want to  insert");
 scanf("%d", &newnode->data);
 newnode->next=0;
 temp=head;
 while(temp->next!=0){
    temp=temp->next;
 }
 temp->next=newnode;
 //displaying the updated list
 temp= head;
printf("updated list after inserting node from ending:");
while(temp !=NULL){
    printf("%d->", temp->data);
    temp= temp->next;

}
printf("null\n");
// deleting the first node
if(head==0){
    printf("empty");

}
else{
    temp=head;
    head=head->next;
    free(temp);
}
//updating list after deleting node from first
temp= head;
printf("updated list after deleting  node from beginning:");
while(temp !=NULL){
    printf("%d->", temp->data);
    temp= temp->next;

}
printf("null\n");
// deleting node from end of linked list
temp=head;
while(temp->next!=0){
    prevnode=temp;
    temp=temp->next;
}
if(temp==head){
    head=0;
}
else{
    prevnode->next=0;

}
free(temp);
//updating list after deleting node from last
temp= head;
printf("updated list after deleting  node fromending");
while(temp !=NULL){
    printf("%d->", temp->data);
    temp= temp->next;
}
printf("null\n");
return 0;

}
