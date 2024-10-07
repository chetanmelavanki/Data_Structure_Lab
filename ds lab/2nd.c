#include<stdio.h>

int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main(){
	int n1,n2,add,substarct,multi,division;
	printf("Enter 1st value");
	scanf("%d",&n1);
	
	printf("Enter 2nd value");
	scanf("%d",&n2);
	
	add=sum(n1,n2);
	printf("sum=%d",add);
	
	substarct=sub(n1,n2);
	printf("\nsub=%d",substarct);
	
	multi=mul(n1,n2);
	printf("\nmultiplacation=%d",multi);
	
	division=div(n1,n2);
	printf("\ndivision=%d",division);;
	return 0;
		
}

int sum(int num1,int num2){
	int temp;
	temp=num1+num2;
	return(temp);
}

int sub(int num1,int num2){
	int temp;
	temp=num1-num2;
	return(temp);
}

int mul(int n1,int n2){
	int temp;
	temp=n1*n2;
	return(temp);

}
int div(int n1,int n2){
	int temp;
	temp=n1/n2;
	return(temp);
}

