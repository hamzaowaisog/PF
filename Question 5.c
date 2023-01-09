#include <stdio.h>
#include <conio.h>

int main ()
{
	unsigned int time = 0;
	unsigned int distance = 0 ;
	float average = 0;
	
	printf("Enter the hours it travelled\n It must be between 1 to 5 hours \n It must not be negative\n");
	scanf("%u",&time);
	printf("Enter the distance it covered \n The distance it ravelled must not be same for every hours \n The distance must not be negative. \n");
	scanf("%u",&distance);
	
	average = distance/time;
	
	printf("The average speed is %f miles per hour ", average);	
	getch();

}
