#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int TOP=-1;
int main()
{
  int stack[MAX],s,ch,i;
  void* x;
  int c;
do
	{
	  printf("\n**STACK OPERATION**\n 1.Push\n 2.Pop\n 3.Display\n 4.Peep\n 5.Empty\n 6.Full\n 7.Exit Please Enter Your Choice :");
	   	scanf("%d",&ch);


		switch(ch)
			{
			  case(1):if(TOP==MAX)
					{
					 printf("STACK OVERFLOW");
					}
				else{
				  printf("Enter the value : ");
				  scanf("%d",&s);
					TOP++;
				  stack[TOP]=s;
				    }
			  break;
			  case 2:if(TOP==-1)
					printf("\nSTACK UNDERFLOW");
				  x=stack[TOP];
					TOP--;
				   free(x);
			  break;
			  case 3:for(i=TOP;i>=0;i--)
				  {
					s=stack[i];
				    printf("%d\n", s);
				   }
			  break;
			  case 4:printf("%d",TOP);
			  break;
			  case 5:
				   if(TOP==1)
				printf("Stack is Empty");
			  break;
			  case 6:
				if(TOP==MAX)
				printf("Stack is Full");
				break;
			  case 7:return 0;
			}
	printf("Do You Wish to Continue?\n 1 or 0\n");
	scanf("%d",&ch);
	
    }
 while(ch==1);
return 0;
}
		
