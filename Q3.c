#include<stdio.h>
#include<conio.h>

int main (){
	float fat_g = 0 , cal = 0 , cal_fat = 0 , per_fat = 0 ; 
	
	printf("Enter the fat gram of the food\n");
	scanf("%f",&fat_g);
	
	if(fat_g > 0){
		printf("\nEnter the total calories of the food\n");
		scanf("%f",&cal);
		if(cal > 0 ){
			cal_fat = fat_g*9;
			if(cal_fat<=cal){
				per_fat = (cal_fat/cal)*100;
				printf("\nThe percentage of calories from fat is %.2f",per_fat);
				if(per_fat<30){
					printf("\nThe food is low in fat ");
				}
			}
			else{
				printf("\nEnter the correct calories or fat grams");
			}
			
		}
		else{
			printf("\nEnter the correct number of calories");
		}
	}
	else{
		printf("\nEnter the correct number of fats in grams");	}
	
}