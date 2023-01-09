#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){
	char first[50];
	char last[50];
	char rev[50];
 
	
	printf("Enter your first name \n");
	scanf("%s",first);
	
	printf("Enter your last name \n");
	scanf("%s",last);
	strcat(first, last);
	printf("The combined name is %s",first);
	strcpy(rev,strrev(first));
	printf("\nThe reversal of the combined name is %s",rev);
	
}