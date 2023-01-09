#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int marks=0 , i=0;
	char ans;
	
	printf("You have done the entry test now enter 'C' for correct answer and 'W' for wrong answer for 10 Questions\n");
	
	for(i=0;i<10;i++){
		printf("\nEnter the Answer for Question %d\n",i+1);
		scanf(" %c",&ans);
		if(ans=='C'|| ans=='c'){
			marks = marks+4;
		}
		else if (ans=='w'|| ans=='W'){
			marks = marks-1;
		}
		else{
			printf("Enter the correct option");
			i--; 
		}
		if(marks == -4 && i==3){
			printf("\nSorry, you did not qualify for the admission.");
			exit(0);
		}
		else if(marks == 20){
			printf("\nCongratulations, you have qualified for the admission");
			exit(0);
		}
	}
}