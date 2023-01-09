#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double sqr_b = 0;
	double disc = 0;
	double root_1 = 0;
	double root_2 = 0;
	double a4c = 0;
	double a2 = 0;
	
	printf("Enter The value of a\n");
	scanf("%lf",&a);
	
	printf("\nEnter The value of b\n");
	scanf("%lf",&b);
	
	printf("\nEnter The value of c\n");
	scanf("%lf",&c);
	
	sqr_b = pow(b,2);
	a4c = 4*a*c;
	a2 = 2*a;
	disc = sqrt((sqr_b - a4c));
	root_1 = (-b+disc)/a2;
	root_2 = (-b-disc)/a2;
	
	if( (sqr_b-a4c) <0 )
	{
		printf("IT IS A COMPLEX ROOT");
		printf("\nThe first root is:-\n %.2lf",root_1);
		printf("\nThe second root is:-\n %.2lf",root_2);
	}
	else
	{
	
	printf("\nThe first root is:-\n %.2lf",root_1);
	printf("\nThe second root is:-\n %.2lf",root_2);
	}
	return 0;
	getch();
	
	
}