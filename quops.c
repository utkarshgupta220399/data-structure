#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int front=-1,rear=-1, qu[MAX];
void enqueue(){
   int item;
   printf("\nenter item to be inserted\n");
   scanf("%d",&item);
   if (front==-1){
      front+=1;
      rear+=1;
      qu[rear]=item;
    }
   else if (rear==MAX)
      printf("array overflow");
   else
      rear+=1;
      qu[rear]=item;
}

void dequeue(){
   int item;
   if (front== rear+1)
     printf("\nqueue is empty\n");
   else if (rear==-1)
     printf("\nqueue is empty\n");
   else{
     item=qu[front];
     rear--;
     printf ("\nthe item deleted is=%d",item);
   }
}

void traverse(){
  int i;
  if ((front==rear+1)||front==-1)
    printf("\n no item to traverse\n");
  else{
    printf("\n item to traverse\n");
    for (i=front;i<=rear;i++)
       printf("%d\t",qu[i]);
}
}

int main(){
int ch;
  while(1){
  printf("\n MENU\n");
  printf("\n 1. ENQUEUE\n");
  printf("\n 2. DEQUEUE\n");
  printf("\n 3. traverse\n");
  printf("\n exit \n");
  printf("\n the chice of yours\n");
  scanf("%d",&ch); 
  switch(ch){
     case 1:
        enqueue();
        break;
     case 2:
        dequeue();
        break;
     case 3:
        traverse();
        break;
     default:
        exit(0);
    }
  }
}





