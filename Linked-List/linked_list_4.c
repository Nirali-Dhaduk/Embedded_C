//Deletion.....
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node* head){
  struct node *ptr = (struct node*)malloc(sizeof(struct node));
  ptr = head;
  while(ptr!=NULL){
    printf("Element:%d\n",ptr->data);
    ptr = ptr->next;


  }
}
//deleting first element
struct node* deleteFirst(struct node* head){
    struct node *ptr = head;
  
    head = head ->next;
    
    free(ptr);
    return head;

}
//deleting element by specific index 
struct node* deleteAtIndex(struct node *head,int index){
  struct node* p = head;
   struct node *q = p->next;
  int i=0;
   while(i< index -1){
    p = p->next;
     q = q->next;
    i++;
   }
     p->next = q->next;
    free(q);
   return  head;
}
//deleting last element
struct node* deleteEnd(struct node* head){
  struct node*p = head;
  struct node *q = p -> next;
  while(q->next !=NULL){
    p = p->next;
    q = q->next;
  }
  p->next = NULL;
  free(q);
  return head;


}
//deleting by value;
struct node* deleteByValue(struct node *head,int value){
  struct node* p = head;
   struct node *q = p->next;
  
   while(q->data!= value && q->next !=NULL){
    p = p->next;
     q = q->next;
   
   }
   if (q->data == value){
     p->next = q->next;
    free(q);
    };
   return  head;
}
int main(){
struct node *head = (struct node*)malloc(sizeof(struct node));
struct node *second = (struct node*)malloc(sizeof(struct node));
struct node *third = (struct node*)malloc(sizeof(struct node));
struct node *fourth = (struct node*)malloc(sizeof(struct node));


head->data = 2;
head->next = second;
second->data = 3;
second->next = third;
third->data=4;
third->next = fourth;
fourth->data=12;
fourth->next = NULL;
traversal(head);

// head = deleteFirst(head);
// head = deleteAtIndex(head,1);
// head = deleteEnd(head);
head = deleteByValue(head,3);
printf("After deletion:\n");

traversal(head);

    return 0;
}