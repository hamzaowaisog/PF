#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int p_stamp = 0;
	int u_stamp = 0;
	int g_stamp = 0;
	int a_stamp = 0;
	int total = 0;
	
	printf("Enter the number of Pakistani stamp\n");
	scanf("%d",&p_stamp);
	
	printf("\nEnter the number of UK stamp\n");
	scanf("%d",&u_stamp);
	
	printf("\nEnter the number of Germany Stamp\n");
	scanf("%d",&g_stamp);
	
	printf("\nEnter the number of Australian Stamp\n");
	scanf("%d",&a_stamp);
	
	total = p_stamp + u_stamp + g_stamp + a_stamp;
	
	printf("\nThe Total number of Stamps are\n %d",total);
	
	return 0;
	getch();
}