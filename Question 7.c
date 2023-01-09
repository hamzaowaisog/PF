#include <stdio.h>
#include <conio.h>

int main(){
	int P = 0 ;
	int R = 0 ;
	int T = 0 ;
	float interest = 0 ;
	float new_amount = 0;
	
	printf("Enter the Principal value. \nIt should between 100 to 1000000\n");
	scanf ("%d",&P);
	
	printf("Enter Interest rate. \nIt must be between 5%% to 10%% \n");
	scanf("%d",&R);
	
	printf("Enter the time period. \nIt must between 1 to 10 years \n");
	scanf("%d",&T );
	
	interest = (P*R*T)/100;
	printf("The Interest will be %f \n",interest);
	
	new_amount = P + interest;
	printf("The new amount will be %f ",new_amount);
	getch();
}