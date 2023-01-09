#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){
	float rew=0,net=0;
	int base=0,monthly=0,i=0;
	
	i=1;
	printf("Welcome To Car Showroom\n");
	while(i!=0){
		net=0;
		rew=0;
		printf("\nEnter your base salary\n");
		scanf("%d",&base);
		if(base<60000){
			exit(0);
		}
		printf("\nEnter your monthly sales\n");
		scanf("%d",&monthly);
		if(monthly>=1000000){
			rew = monthly * 0.35;
			net = rew+base;
		}
		else{
			rew = monthly*0.02;
			net = rew+base;
		}
		printf("\nThe net salary of salesperson is %.2f",net);
	}
}