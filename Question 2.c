#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int arr[5];
	int i=0,sum=0,*ptr;
	
	for(i=0;i<5;i++){
		printf("\nEnter the %d num ",i+1);
		scanf("%d",&arr[i]);
	}
	
	ptr = arr;
	
	for(i=0;i<5;i++){
		sum = sum + *ptr;
		ptr++;
	}
	printf("\nThe sum of number is %d",sum);
}