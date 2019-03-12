#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *link;
};
struct node *top=NULL;

void push(){
   struct node *new;
   int item;
   if (new==NULL)
      printf("\n no memory\n");
   else{
      printf("\nenter item to be inserted\n");
      scanf("%d",&item);
      new = (struct node*) malloc(sizeof(struct node));
      new->info=item;
      new->link=top;
      top=new;
   }
}

void pop(){
  struct node * item ;
  if (top==NULL)
     printf("\n stack is empty\n");
  else
    item=top;
    top=top->link;
    printf("\n item deleted is %d \n",item->info);
    free(item);
}

void traverse(){
   struct node  *ptr ;
   ptr=top;
   printf("\nthe item is\n");
   while (ptr!=NULL){
      printf(" %d\t",ptr->info);
      ptr=ptr->link;
   }
}

int main(){
  int ch;
  while(1){
  printf("\n MENU\n");
  printf("\n 1. PUSH\n");
  printf("\n 2. POP\n");
  printf("\n 3. traverse\n");
  printf("\n exit \n");
  printf("\n the chice of yours\n");
  scanf("%d",&ch); 
  switch(ch){
     case 1:
        push();
        break;
     case 2:
        pop();
        break;
     case 3:
        traverse();
        break;
     default:
        exit(0);
    }
  }
}
