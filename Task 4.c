#include<stdio.h>
#include<conio.h>

int main ()
{
	char choice ;
	float temp = 0 ;
	
	printf("Press c to convert temperature from fahrenheit to Celsius\n");
	printf("\nPress f to convert temperature from Celsius to Fahrenheit\n");
	
	printf("\nEnter your choice (c,f)\n");
	scanf ("%c",&choice);
	
	switch(choice)
	{
		case 'c':
		case 'C':
			printf("Enter the temperature in Fahrenheit\n");
			scanf("%f",&temp);
			
			temp = (temp-32)*5/9;
			
			printf("Temperature in Celsius : %.2f",temp);
			break ;
			
		case 'f':
		case 'F':
			printf("\nEnter the temperature in Celsius\n");
			scanf("%f",&temp);
			
			temp = (temp*9/5)+32;
			
			printf("temperature in Fahrenheit : %.2f",temp);
			break;
		default:
			printf("Enter the correct option....");
			
			
			
			
	}
	return 0 ;
	getch();
	
}