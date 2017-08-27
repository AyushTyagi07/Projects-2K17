#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void Push(int[],int);
void Pop(int[],void*);
void Display(int[],int);
void Peep(void);
void Empty(void);
void Full(void);

int TOP=-1,i,s;
void* x;

int main()
{
  int stack[MAX],ch;
  
  int c;
do
	{
	  printf("\n**STACK OPERATION**\n 1.Push\n 2.Pop\n 3.Display\n 4.Peep\n 5.Empty\n 6.Full\n 7.Exit Please Enter Your Choice :");
	   	scanf("%d",&ch);


		switch(ch)
			{
			  case(1):Push(stack,s);
			  break;
			  case 2:Pop(stack,x);
			  break;
			  case 3:Display(stack,s);
			  break;
			  case 4:Peep();
			  break;
			  case 5:Empty();
			  break;
			  case 6:Full();
			  break;
			  case 7:return 0;
			}
	printf("Do You Wish to Continue?\n 1 or 0\n");
	scanf("%d",&ch);
	
    }
 while(ch==1);
return 0;
}
	void Push(int stack[],int s)
		{
		 if(TOP==MAX)
					{
					 printf("STACK OVERFLOW");
					}
				else{
				  printf("Enter the value : ");
				  scanf("%d",&s);
					TOP++;
				  stack[TOP]=s;
				    }	
	      }
	
	void Pop(int stack[],void*x)
		{
			if(TOP==-1)
					printf("\nSTACK UNDERFLOW");
				  x=stack[TOP];
					TOP--;
				   free(x);
		}

	void Display(int stack[],int s)
		{
			for(i=TOP;i>=0;i--)
				  {
					s=stack[i];
				    printf("%d\n", s);
				   }
		}

	void Peep()
		{
			printf("%d",TOP);
		}


	void Empty()
		{
			if(TOP==1)
				printf("Stack is Empty");
		}
		
	void Full()
		{
			if(TOP==MAX)
				printf("Stack is Full");
		}
