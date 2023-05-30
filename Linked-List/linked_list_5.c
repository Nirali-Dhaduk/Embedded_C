//doubly linked list 
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* prev;
    struct node* next;
};
void traversal(struct node* head){
   struct node *ptr = (struct node*)malloc(sizeof(struct node));
  ptr = head;
  while(ptr!=NULL){
    printf("Element:%d\n",ptr->data);
    ptr = ptr->next;


  }}
  //inserting a node at beginning 
  struct node* insertAtFirst(struct node *head,int data){
    struct node *p = (struct node*)malloc(sizeof(struct node));
    
 
    p->next = head;
       p->prev = NULL;
    p->data = data;
    return p;
  }
struct node* insertAtEnd(struct node *head,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
   ptr-> data = data;
   struct node *p = head;
while(p->next!=NULL){
    p = p-> next;
}
ptr-> prev = p;
   ptr->next = NULL;
  
   return ptr;
  }

  // deleting a node at begining
  struct node* deleteFirst(struct node *head){
   struct node *ptr = head;
  head = head->next;
  head -> prev = NULL;
  free(ptr);
  return head;
  }
  

int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
     struct node *second = (struct node*)malloc(sizeof(struct node));
      struct node *third = (struct node*)malloc(sizeof(struct node));
      struct node *fourth = (struct node*)malloc(sizeof(struct node));
head->data= 5;
head->prev = NULL;
head->next = second;

second->data= 90;
second->prev = head;
second->next = third;

third->data= 45;
third->prev = second;
third->next = fourth;

fourth->data= 14;
fourth->prev = third;
fourth->next = NULL;
head = insertAtFirst(head,23);
head = insertAtEnd(head,30);
head = deleteFirst(head);
traversal(head);
    return 0;
}
