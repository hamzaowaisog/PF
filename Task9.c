#include<conio.h>
#include<stdio.h>
#include<math.h>

int main ()
{
	double kg = 0;
	double height = 0;
	double sqr_height = 0;
	double BMI = 0;
	
	printf("Enter yor weight in kg\n");
	scanf("%lf",&kg);
	
	printf("\nEnter your Height in Meters\n");
	scanf("%lf",&height);
	
	sqr_height = pow(height,2);
	
	BMI = kg/sqr_height;
	
	if(BMI < 18.5)
	{
		printf("\nYou are Underweight \n %.2lf",BMI);
		getch();
		return (0) ;
		
		
	 } 
	  	 if(BMI>=18.5 && BMI<=24.9)
	  	 {
	  	 	printf("\nYou are Normal \n%.2lf",BMI);
	  	 	getch();
	  	 	return (0) ;
	  	 	
		   }
		   if(BMI>= 25 && BMI<=29.9)
		   {
		   	printf("\nYou are Overweight \n%.2lf",BMI);
		   	getch();
			   return(0);
		   }
			
			
			   printf("\nYou are Obese\n%.2lf",BMI);
		   	getch();
		   return 0;
		   

	
}