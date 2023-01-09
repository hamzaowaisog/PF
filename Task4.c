#include <stdio.h>
#include <conio.h>

int main ()
{
	int year = 0;
	int week =0;
	int day = 0;
	int u_days=0 , u_weeks=0  ;
	
	printf("Enter The Days \n");
	scanf("%d",&u_days);
	
	year = u_days / 365;
	
	printf ("\nThe Years are %d\n",year);
	
	 u_weeks = u_days%365;
	week = u_weeks / 7;
	
	printf("\nThe weeks are %d\n",week);
	
	day = u_days - ((week*7) + (year*365));
	
	printf("\nThe Days are %d\n",day);
	
	return 0 ;
	getch();
	
}

