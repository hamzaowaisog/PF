#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int marks[5],marks_1[5];
	int i=0,j=0;
	
	for(i=0;i<5;i++){
		printf("\nEnter Student %d Mark ",i+1);
		scanf("%d",&marks[i]);
		if(marks[i]<0 || marks[i]>10){
			printf("\nWrong Entry");
			i=i-1;
			continue;
		}
	}
	for(i=0;i<5;i++){
		printf("\nEnter Student %d Mark ",i+6);
		scanf("%d",&marks_1[i]);
		if(marks[i]<0 || marks[i]>10){
			printf("\nWrong Entry");
			i=i-1;
			continue;
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(marks[i]==marks_1[j]){
				printf("\nThe common marks are of Student %d and %d is %d",i+1,j+6,marks[i]);
			}
		}
	}
	
}