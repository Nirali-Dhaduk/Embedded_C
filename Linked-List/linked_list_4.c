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
void deleteFirst(struct node* head){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    head = head ->next;
    
    free(ptr);

}
int main(){
struct node *head = (struct node*)malloc(sizeof(struct node));
struct node *second = (struct node*)malloc(sizeof(struct node));
struct node *third = (struct node*)malloc(sizeof(struct node));

head->data = 2;
head->next = second;
second->data = 3;
second->next = third;
third->data=4;
third->next = NULL;
// traversal(head);
deleteFirst(head);
traversal(head);
    return 0;
}