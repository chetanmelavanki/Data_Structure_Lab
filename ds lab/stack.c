#include<stdio.h>
#define Max 5
int Push(int[],int);
int Pop(int[],int);
void Show(int[],int);

int main(){
	
	int ch,stack[Max],top=-1;
	for(;;)
	{
		printf("1.Push\n2.Pop\n3.Show\n4.Exit\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: top=Push(stack,top);
					break;
			case 2: top=Pop(stack,top);
					break;
			case 3: Show(stack,top);
					break;
			case 4: return 0;
			default:printf("Invalid choice\nPlease enter valid choice\n");
		}//enf of switch
	}//end of for
}//end of main

//Push operation
int Push(int s[Max], int t)
{
	int element;
	if(t==Max-1)
	printf("Stack is full....!\n");
	else
	{
		printf("Enter the elements");
		scanf("%d",&element);
		t+=1;
		s[t]=element;
	}
	return t;
}


//Pop Operation
int Pop(int s[Max],int Top)
{
	int element;
	if(Top==-1)
	printf("Stack is empty");
	else
	{
		element=s[Top];
		printf("%d is popped",element);
		Top-=1;
	}
	return(Top);
}

//Display

void Show(int s[Max],int T)
{
	int i;
	if(T==-1)
	printf("stack is empty");
	else
	{
		for(i=0;i<=T;i++)
		printf("%d\n",s[i]);
	}
}

