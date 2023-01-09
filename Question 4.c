#include <conio.h>
#include <stdio.h>
int main()
{
	float salary = 0;
	float tax_rate = 0;
	float tax = 0;
	float paid_salary = 0;
	
	printf("Enter the amount of salary\n");
	scanf("%f",&salary);
	printf("Enter the tax rate\n");
	scanf("%f",&tax_rate);
	
	tax = salary*(tax_rate/100);
	paid_salary = salary-tax;	
	
	printf("The tax on your slary is \n %.2f", tax);
	printf("\nYour salary after tax is \n %.2f", paid_salary);
	getch(); 
	
}
