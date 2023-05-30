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
  
  //inserting a node at the end
struct node* insertAtEnd(struct node *head,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
   ptr-> data = data;
   struct node *p = head;
while(p->next!=NULL){
    p = p-> next;
}
p->next = ptr;
  ptr-> prev = p;

   ptr->next = NULL;
   return head;
  }
  //inserting a node at specific index
struct node* insertAtIndex(struct node *head,int data,int index){
  struct node *ptr = (struct node*)malloc(sizeof(struct node));
  ptr->data = data;
  struct node *p = head;
  int i=0;
  while(i<index-1){
    p=p->next;
    i++;
  }
  ptr->next = p->next;
  p->next = ptr;
  ptr->prev = p;
  return head;
  }

  // deleting a node at begining
  struct node* deleteFirst(struct node *head){
   struct node *ptr = head;
  head = head->next;
  head -> prev = NULL;
  free(ptr);
  return head;
  }
  //deleting the last node
  struct node* deleteEnd(struct node *head){
    struct node *p = head;
    struct node *q = p->next;
    while(q->next!=NULL){
      p= p->next;
      q=q->next;
    }
    p->next = NULL;
    free(q);
    return head;

  }
  //deleting node at certain position
  struct node* deleteAtIndex(struct node *head,int index){
    struct node *p = head;
    struct node *q = p->next;
    int i = 0;
    while(i<index-1){
      p = p->next;
      q= q->next;
      i++;
    }
    p->next = q->next;
    q->prev = p;

    free(q);
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
printf("List before any operation:\n");
traversal(head);
printf("After inserting a node at the beginning:\n");
traversal(head);

head = insertAtEnd(head,30);
head = insertAtEnd(head,45); 
printf("After inserting a node at the beginning:\n");
traversal(head);

head = insertAtIndex(head,0,4);
printf("After inserting a node at a certain position:\n");
traversal(head);

head = deleteFirst(head);
printf("After deleting a node at the beginning:\n");
traversal(head);

head = deleteEnd(head);
printf("After deleting a node at the End:\n");
traversal(head); 

head = deleteAtIndex(head,3);
printf("After deleting a node at a certain position:\n");
traversal(head);

    return 0;
}
