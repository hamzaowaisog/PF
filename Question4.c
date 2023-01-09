#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){
	int marks[50];
	int max=0,min=100,i=0;
	
	for(i=0;i<50;i++){
		printf("Enter Student %d marks ",i+1);
		scanf("%d",&marks[i]);
		if(marks[i]<0 || marks[i]>10){
			printf("\nWrong Entry ");
			i=i-1;
			continue;
		}
		if(marks[i]<min){
			min = marks[i];
		}
		if(marks[i]>max){
			max = marks[i];
		}
	}
	
	for(i=0;i<50;i++){
		printf("\nThe marks of Student %d is %d",i+1,marks[i]);
	}
	printf("\nThe Maximum Marks is %d",max);
	printf("\nThe Minimum Marks is %d",min);
}