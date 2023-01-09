#include<stdio.h>
#include<conio.h>

int main (){
	char sign ;
	float num1 = 0 ;
	float num2 = 0 ;
	
	printf("WELCOME TO SIMPLE CALCULATOR\n");
	printf("-----------------------------\n");
	
	printf("Enter Number 1\n");
	scanf("%f",&num1);
	
	printf("Enter Number 2\n");
	scanf("%f",&num2);
	
	printf("Enter the operator you want to perform\n");
	scanf(" %c",&sign);
	
	switch (sign){
		case '+':
			printf("%.2f %c %.2f = %.2f",num1,sign,num2,num1+num2);
			break;
		case'-':
			printf("%.2f %c %.2f = %.2f",num1,sign,num2,num1-num2);
			break;
		case'*':
			printf("%.2f %c %.2f = %.2f",num1,sign,num2,num1*num2);
			break;
		case'/':
			printf("%.2f %c %.2f = %.2f",num1,sign,num2,num1/num2);
			break;
		default:
			printf("Enter correct operator");
	}
	
	return 0 ;
	getch();
	
	
}