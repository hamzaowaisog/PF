#include<stdio.h>
#include<conio.h>

int main (){
	int A_age = 0;
	int M_age = 0;
	int F_age = 0;
	
	printf("Enter Ali age \n");
	scanf("%d",&A_age);
	
	printf("\nEnter Moazam age\n");
	scanf("%d",&M_age);
	
	printf("\nEnter Fahd age\n");
	scanf("%d",&F_age);
	
	if(A_age<M_age && A_age<F_age){
		printf("Ali is the youngest of all %d",A_age);
	}
	else if (M_age<A_age && M_age<F_age){
		printf("Moazam is the youngest of all %d",M_age);
	}
	else if (F_age<A_age && F_age<M_age){
		printf("Fahd is the younngest of all %d",F_age);
	}
	else {
		printf("The two of the boys are of same age ");
	}
	
	return 0;
	getch();
	
}