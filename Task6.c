#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	double x1 = 0;
	double x2 = 0;
	double y1 = 0;
	double y2 = 0;
	double diff_x = 0;
	double diff_y = 0;
	double sq_x = 0;
	double sq_y = 0;
	double distance = 0;
	double mid_p = 0;
	double add_x = 0;
	double add_y = 0;
	double midpoint_x = 0;
	double midpoint_y = 0;
	
	printf("Enter The first X-cordinate\n");
	scanf("%lf",&x1);
	
	printf("\nEnter The Second X-cordinate\n");
	scanf("%lf",&x2);
	
	printf("\nEnter The first Y-cordinate\n");
	scanf("%lf",&y1);
	
	printf("\nEnter The second Y-cordinte\n");
	scanf("%lf",&y2);
	
	diff_x = x1-x2;
	diff_y = y1-y2;
	
	sq_x = pow(diff_x,2);
	sq_y = pow(diff_y,2);
	
	distance = sqrt ((sq_x+sq_y));
	
	add_x = x1+x2;
	add_y = y1+y2;
	midpoint_x = add_x/2;
	midpoint_y = add_y/2;
	
	printf("\nThe Distance is :-\n%.2lf",distance);
	
	printf("\n\nThe midpoint is :-\n(%.2lf , %.2lf)",midpoint_x,midpoint_y);
	
	return 0 ;
	getch();
}