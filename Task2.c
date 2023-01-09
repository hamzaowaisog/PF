#include <stdio.h>
#include <conio.h>

int main()
{
	int num1=0,num2=0;
	int sum = 0;
	int product = 0;
	int difference = 0;
	float quotient = 0;
	int remainder = 0;
	
	printf("Enter Num 1 \n");
	scanf ("%d",&num1);
	
	printf("\nEnter Num 2 \n");
	scanf ("%d",&num2);
	
	sum = num1 + num2;
	difference = num1 - num2 ;
	product = num1 * num2 ;
	quotient = num1 / num2 ;
	remainder = num1 % num2 ;
	
	printf("THE SUM OF 2 NUMBERS ARE %d\n",sum);
	printf("\nTHE DIFFERENCE OF 2 NUMBERS ARE %d\n",difference);
	printf("\nTHE PRODUCT OF 2 NUMBERS ARE %d\n",product);
	printf("\nTHE QUOTIENT OF 2 NUMBERS ARE %f\n",quotient);
	printf("\nTHE REMAINDER OF 2 NUMBERS ARE %d\n",remainder);
	
	return 0;
	getch();
	
}
