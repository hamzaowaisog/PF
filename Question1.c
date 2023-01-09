#include<conio.h>
#include<stdio.h>

int main(){
	int num=0,size=0,total=0,i=0;
	float average=0;
	
	printf("Enter the size of array you want\n");
	scanf("%d",&size);
	
	int array[size];
	
	for(i=0;i<size;i++){
		printf("Enter the number");
		scanf("%d",&num);
		if(num>=0){
			array[i]=num;
		}
		else{
			i=i-1;
		}
	}
	
	for(i=0;i<size;i++){
		total = total+array[i];
	}
	
	average = total/size;
	
	printf("\nThe sum of numbers is %d",total);
	printf("\nThe average of number is %.2f",average);
	
}