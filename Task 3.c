#include<stdio.h>
#include<conio.h>

int main(){
	char alp ;
	
	printf("Enter the Character\n");
	scanf("%c",&alp);
	
	if(alp>='a'&& alp<='z'){
		printf("It is small alphabet");
	}
	else if (alp>='A' && alp<='Z')
	{
		printf("It is capital alphabet");
	}
	else if (alp>='0' && alp<='9')
	{
		printf("It is number");
	}
	else
	{
		printf("It is special Character");
	}
}