#include<stdio.h>
#define MAX 10
int top=-1;
int stack[MAX];
void push(){
  int item;
  printf("\nenter item to be inserted\n");
  scanf("%d",&item);
  if (top==MAX)
     printf("OVERFLOW");
  else{
     top+=1;
     stack[top]=item;
    }
}
void pop(){
  int item;
  if (top<=0)
    printf("\n UNDERFLOW\n");
  else{
    item=stack[top];
    top-=1;
    printf("\nitem you deleted is\n",item);
  }
}
void traverse(){
   int i;
   printf("\n the item in stack are\t");
   for (i=0;i<=top;i++)
     printf("%d\t",stack[i]);
}

int main(){
  
  while(1){
  printf("\n MENU\n");
  printf("\n 1. PUSH\n");
  printf("\n 2. POP\n");
  printf("\n 3. traverse\n");
  printf("\n exit \n");
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
