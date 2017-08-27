



#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Stack
{
    long int top;
    unsigned capacity;
   long int*a;
};
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity=capacity;
    stack->top=-1;
    stack->a=(long int*)malloc(stack->capacity*sizeof(long int));
    return stack;
}

int isFull(struct Stack* stack)
{
    return stack->top==stack->capacity-1;
}
int isEmpty(struct Stack* stack)
{
    return stack->top==-1;
}
void push(struct Stack* stack,long int item )
{
    if(isFull(stack))
        return;
    stack->a[++stack->top]=item;
}
int pop(struct Stack* stack)
{
    if(isEmpty(stack))
    { printf("Stack is Empty\n");
        return 0;
        }
    return --stack->top;
}
void Displaymax(struct Stack* stack)
{
     if(isEmpty(stack))
    { printf("Stack is Empty\n");
        }
        else{
    long int max=0,i;
    for(i=0;i<=stack->top;i++)
    {
                
           if(stack->a[i]>max)
           {
               max=stack->a[i];           }
        
    }
    printf("%ld\n", max);
}
}

void Display(struct Stack* stack)
{
     if(isEmpty(stack))
    { printf("Stack is Empty\n");
        }
        else{
    long int max=0,i;
    for(i=0;i<=stack->top;i++)
    {
    printf("%ld\n",stack->a[i]);               
    }
}
}
void automatic(struct Stack* stack ,int sch)
{     
      long int i=0;
     for(i=0;i<sch;i++)
     {
                       push(stack,i);
     }
}                       

int main() {
    unsigned long int q,i,x,ch,sch;
    struct Stack* stack=createStack(100000);
   do
	{
	  printf("\n**STACK OPERATION**\n 1.Push\n 2.Pop\n 3.Displaymax\n 4.Display All \n 5.Exit\n Please Enter Your Choice :");
        scanf("%ld", &ch);
        switch(ch)
               {
            case 1 : printf("Automation for how many inputs is required ? ");
                    scanf("%ld",&sch);
                    if(sch>0)
                    automatic(stack,sch);
                    else
                    {
                 scanf("%ld",&x);
                push(stack,x);}
                break;
            case 2 : pop(stack);
                break;
            case 3 : Displaymax(stack);
                break;
                  case 4 : Display(stack);
                  break;
                  case 5 : return 0;
               } 
	printf("Do You Wish to Continue?\n 1 or 0\n");
	scanf("%d",&ch);
	
    }
 while(ch==1);

     
    return 0;
}
