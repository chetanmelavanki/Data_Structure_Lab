//program to check valid expression using operator and operand
#include<stdio.h>
#include<string.h>

int valid(char[]);//function prototype

int main(){
	char infix[20 ];
	
	printf("Enter expression: ");
    scanf("%s", infix);  // Read the input expression

    // Check if the expression is valid
    if (valid(infix)) {
        printf("Valid expression\n");
    } else {
        printf("Invalid expression\n");
    }

    return 0;
	
}

//function check for valid expression
int valid(char infix[]){//function definiton
	int operand=0;
	int operator=0;
	int i=0;
	char ch;

	int n=strlen(infix);
	while(i<n){
		ch=infix[i];
		if((ch>=65 && ch<=90) || (ch>=97 && ch<=122) || (ch>=48 && ch<=57)){
			operand++;
			
		}
			
		else{
			operator++; 
		}
		i++;
	}
	
	if(operand-1 == operator){
		return 1;
	}
	else{
		return 0;
	}
}


