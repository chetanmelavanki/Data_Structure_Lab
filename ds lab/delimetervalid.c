#include<stdio.h>
#define Max 10
int valid(char[]);
int Push(char,int,char[]);
char Pop(char[],int*);
int main()
{
	char exp[25];
	printf("enter the expression: ");
	scanf("%s",exp);

	if(valid(exp))
		printf("valid expression");
	else
		printf("invalid Expression");
		
	return 0;
	
}//end of main


//function check for valid expression
int valid(char expr[]){
	int i=0;
	int top=-1;
	char stack[Max],topsymb,symb;
	while(expr[i] != '\0'){
		symb=expr[i];
		if(symb=='{' || symb=='[' || symb=='(')
			top=Push(symb,top,stack);
		else if(symb=='}' || symb==']' || symb==')'){
			if(top==-1)
				return 0;
			else{
				topsymb=Pop(stack,&top);
				if((symb==')' && topsymb=='(') || (symb=='}' && topsymb=='{') || (symb==']' && topsymb=='['))
					return 1;
			}
		}
		i++;
	}
	
	if(top!=-1)
		return 0;
	else
		return 1;
}



//Push operation
int Push(char ch,int top,char stack[Max])
{
		top+=1;
		stack[top]=ch;
		return top;

}


//Pop Operation
char Pop(char s[Max],int *t)
{
 	char element;
	
	element=s[*t];
	*t-=1;
	return element;	
	
}




