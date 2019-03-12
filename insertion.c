#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *link;
};
struct node *start=NULL;

void create(){
  struct node *temp,*ptr;
  int item;
  char ch='y';
  while (ch=='y' || ch=='Y'){
    temp= (struct node*) malloc(sizeof(struct node));
    if (temp==NULL){
      printf("memory overflow");
      exit(0);
    }
    printf("enter info");
    scanf("%d",&item);
    temp->info=item;
    temp->link=NULL;
    
    if (start==NULL)
        start=temp;
    else{
      ptr=start;
      while (ptr->link!=NULL)
               ptr=ptr->link;
       ptr->link=temp;
}
      printf("\ndo you want to add more list\t");
      scanf(" %c",&ch);
    
}}

void display(){
  struct node *ptr;
   if (start==NULL)
    {
      printf("list is empty");
      exit(0);
    }
   else{
       ptr=start;
         while(ptr!=NULL){
             printf("%d\t",ptr->info);  
             ptr=ptr->link;}
            }
}  

void insertbeg(){
  struct node *temp,*ptr;
  int item;
  temp= (struct node*) malloc(sizeof(struct node));
  printf("\nenter info to be inserted in insertion process\n");
  scanf("%d",&item);
  if (start==NULL)
    {start=temp;
    temp->info=item;
    temp->link=NULL;
     }
   else{
temp->info=item;
     temp->link=start;
     start=temp;}
}

void insertend(){
  struct node *temp,*ptr;
  int item;
  temp= (struct node*) malloc(sizeof(struct node));
   printf("\nenter info to be inserted in insertion process\n");
  scanf("%d",&item);
   if (start==NULL)
    {start=temp;
    temp->info=item;
    temp->link=NULL;
     }
   else{
     ptr=start;
     while (ptr->link!=NULL){
       ptr->link=temp;
       temp->info=item;
       temp->link=NULL;
}
}
       
}  

int main(){
create();
insertbeg();
insertend();
display();

return 0;

}
