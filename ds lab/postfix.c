#include<stdio.h>
#define max 10
int push(int[],int);
int pop(int[],int);
int evaluatePostfix(char[]);

int evaluatePostfix(char postfix[]){
	int stack[Max];
	int top=-1;
	int i=0,op1,op2,result;
	char symb;
	while(postfix[i]!='\0'){
		symb=postfix[i];
		if(symb >= '0' && symb <= '9'){
			top=push(stack,top);
			stack[top]=symb-'0';
			
		}else if(symb=='+' || symb=='-' || symb=='*' || symb=='/'){
			op2=pop(stack,&top);
			top--;
			op1=pop(stack,&top);
			top--;
			if(symb=='+')
				result=op1+op2;
			else if(symb=='-')
				result=op1-op2;
			else if(symb=='*')
				result=op1*op2;
			else if(symb=='/')
				result=op1/op2;
			else{
				printf("Invalid operator");
			}
			top=push(stack,top);
			stack[top]=result;
		}
		i++;
	}
	return pop(stack,&top);
}

int push(int s[max],int t){
	int ele;
	if(t==max-1)
		printf("stack is full");
	else{
		t+=1;
		s[t]=ele;
	}
	return t;
}

int pop(int s[Max],int *top){
	int ele;
	if(*top==-1)
		printf("stack is empty");
	else{
		ele=s[top];
		top-=1;
	}
	return ele;
}

int main(){
	char postfix[25];
	printf("enter the postfix expression: ");
	scanf("%s",postfix);
	int result=evaluatePostfix(postfix);
	printf("The result of postfix expression %s is :%d\n",postfix,result);
	return 0;
}
