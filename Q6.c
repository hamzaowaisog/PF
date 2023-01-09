#include<stdio.h>
#include<conio.h>
int main (){
	
	char week , vacation;
	
	printf("Enter the day of the week\n");
	scanf("%c",&week);
	
	printf("Are you on vacation or not ? press [Y/N]\n");
	scanf(" %c",&vacation);
	
	switch(week){
		case 'm':
		case 'M':
		switch(vacation){
		case 'Y':
		case 'y':
			printf("\nTrue");
			break;
		case'N':
		case'n':
			printf("\nFalse");
			break;
		}
		break;
		case 't':
		case 'T':
		switch(vacation){
		case 'Y':
		case 'y':
			printf("\nTrue");
			break;
		case'N':
		case'n':
			printf("\nFalse");
			break;
		}
		break;
		case 'W':
		case 'w':
		switch(vacation){
		case 'Y':
		case 'y':
			printf("\nTrue");
			break;
		case'N':
		case'n':
			printf("\nFalse");
			break;
		}
		break;
		case 'f':
		case 'F':
		switch(vacation){
		case 'Y':
		case 'y':
			printf("\nTrue");
			break;
		case'N':
		case'n':
			printf("\nFalse");
			break;
		}
		break;
		case 'S':
		case 's':
			printf("\nTrue");
		break;
	}
		
		
		}
	


