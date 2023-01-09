#include <stdio.h>
#include <conio.h>

int main ()
{
	float id = 0;
	float salary = 0;
	int hours = 0;
	float tsalary =0;
	
	printf("Enter The Employee ID\n");
	scanf ("%f",& id);
	
	printf("\nEnter The working hours\n");
	scanf("%d",&hours);
	
	printf("\nEnter The Salary amount per hr\n");
	scanf("%f",&salary);
	
	tsalary = salary * hours;
	
	printf("\nEmlpoyees Id 0%.2f\n",id);
	printf("\nSalary = %.2f",tsalary);
	
	return 0;
	getch();
}
