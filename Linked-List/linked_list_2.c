//insertion at first and end
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *ptr){
    while(ptr!=NULL){

   printf("Element: %d\n",ptr->data);
     ptr = ptr-> next;
    }
}
struct node* insertAtFirst(struct node *head,int data){
   struct node* ptr = (struct node*)malloc(sizeof(struct node));

   ptr->next = head;
   ptr-> data = data;
   return ptr;

}
struct node* insertAtEnd(struct node *head,int data){
   struct node* ptr = (struct node*)malloc(sizeof(struct node));
   ptr-> data = data;
   struct node *p = head;
while(p->next!=NULL){
    p = p-> next;
}
   ptr->next = NULL;
  
   return ptr;

}
int main(){
    struct node *head;
        struct node *second;
    struct node *third;

head = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node));
head ->data = 10;
head->next = second;
second ->data = 20;
second->next = third;
third ->data = 30;
third->next = NULL;
traversal(head);
head = insertAtFirst(head,90);
printf("\n");
printf("After insertion:\n");
traversal(head);
head = insertAtEnd(head,100);
traversal(head);
    return 0;
}