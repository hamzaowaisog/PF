#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char str_1[100];
	char str_2[100];
	
	int l1=0,l2=0,r=0;
	
	
	printf("Enter the String 1 ");
	gets(str_1);
	
	printf("Enter the string 2 ");
	gets(str_2);
	
	l1 = strlen(str_1);
	l2 = strlen(str_2);
	r = strcmp(str_1,str_2);
	if(l1 == l2){
		if(r == 0){
			printf("The both strings are same");
		}
		else if(r > 0){
			printf("String 1 is greater than string 2");
		}
		else if (r < 0){
			printf("String 2 is greater than string 1");
		}
	}
	else if (l1 > l2 ){
		printf("String 1 is greater than string 2");
	}
	else{
		printf("String 2 is greater than String 1");
	}
}