#include<stdio.h>
void Show(int stack[],int top)
{

	int i;
	if(top==-1)
	printf("stack is empty\n");
	else
	{
		for(i=0;i<=top;i++)
		printf("%d\n",stack[i]);
	}
}
