#include <stdio.h>
#include <conio.h>

int main ()
{
	int min =0;
	float hours = 0 ;
	int t_min = 0;
	
	printf("Enter The hours\n");
	scanf ("%f",&hours);
	
	hours = hours * 60;
	
	printf("\nEnter The min\n");
	scanf("%d",& min);
	
	t_min = hours + min ;
	
	printf("The Total minutes are %d", t_min);
	
	return 0;
	getch();
}
