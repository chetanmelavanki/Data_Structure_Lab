#include<stdio.h>
#include "show_header.h"
#define Max 5
void Push();
void Pop();
void Show(int[],int);

int stack[Max],top=-1;

int main()
{
	
	int ch;
	for(;;)
	{
		printf("1.Push\n2.Pop\n3.Show\n4.Exit\nEnter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: Show(stack,top);
					break;
			case 4: return 0;
			default:printf("Invalid choice\nPlease enter valid choice\n");
		}//enf of switch
	}//end of for
}//end of main




//Push operation
void Push()
{
	int element;
	if(top==Max-1)
	printf("Stack is full....!\n");
	else
	{
		printf("Enter the elements\n");
		scanf("%d",&element);
		
		top+=1;
		stack[top]=element;
		
		
	}

}


//Pop Operation
void Pop()
{
	int element;
	if(top==-1)
	printf("Stack is empty\n");
	else
	{
		element=stack[top];
		printf("'%d' is popped\n",element);
		top-=1;
	}
	
}

//Display

//void Show()
//{
//	int i;
//	if(top==-1)
//	printf("stack is empty\n");
//	else
//	{
//		for(i=0;i<=top;i++)
//		printf("%d\n",stack[i]);
//	}
//}

