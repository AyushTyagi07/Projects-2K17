
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

int Full(struct Stack* stack)
{
    return stack->top==stack->capacity-1;
}
int Empty(struct Stack* stack)
{
    return stack->top==-1;
}
void push(struct Stack* stack,long int item )
{
    if(Full(stack))
        return;
    stack->a[++stack->top]=item;
}
int pop(struct Stack* stack)
{
    if(Empty(stack))
        return 0;
    return --stack->top;
}
void Display(struct Stack* stack)
{
    long int max=0,i;
    for(i=0;i<=stack->top;i++)
    {
                
           if(stack->a[i]>max)
           {
               max=stack->a[i];           }
        
    }
    printf("%ld\n", max);
}
int main() {
    unsigned long int q,i,x,ch;
    struct Stack* stack=createStack(100000);
    scanf("%ld", &q);
    for(i=0;i<q;i++)
    {
        scanf("%ld", &ch);
        switch(ch)
               {
            case 1 :scanf("%ld",&x);
                push(stack,x);
                break;
            case 2 : pop(stack);
                break;
            case 3 : Display(stack);
                break;
               } 
    }

     
    return 0;
}
