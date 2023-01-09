#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	int num=0,sum=0,rem=0,rem_1=0,sum_1=0;
	
	printf("Enter the Number ");
	scanf("%d",&num);
	if(num>=1000){
		while(num>0){
			rem = num%10;
			num = num/10;
			sum = sum+rem;
			
		}
		while(sum>0){
			rem_1 = sum%10;
			sum = sum/10;
			sum_1 = sum_1+rem_1;
			if(sum_1>10){
				 	rem_1=sum_1%10;
				 	sum_1 = sum_1/10;
				 	sum_1 = sum_1+rem_1;
			}
		}
		printf("The Sum of Number is %d",sum_1);
	}
	else {
		printf("\nYou have entered wrong number run the program again and enter the correct number");	
	}
}