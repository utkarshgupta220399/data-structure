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
         while(ptr!=NULL)
            {
             printf("%d\t",ptr->info);  
             ptr=ptr->link;
             }
        }
}

void reverse(){
  struct node *p1,*p2,*p3;  
  p1=start;
  p2=p1->link;
  p3=p2->link;
  p1->link=NULL;
  p2->link=p1;
  while(p3!=NULL){
     p1=p2;
     p2=p3;
     p3=p3->link;
     p2->link=p1;
     }
   start =p2;
} 

int main(){
create();
display();
reverse();
printf("\nthe list in reverse order is\n ");
display();
return 0;

}
