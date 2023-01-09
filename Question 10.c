#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int i=0,n=0;
	char *ptr , *temp;
	
	printf("\nEnter the number characters in your name ");
	scanf("%d",&i);
	
	temp = (char*) calloc(i,sizeof(char));
	ptr = (char*) calloc(i,sizeof(char));
	strcpy(ptr,"Mir Hamza");
	strcpy(temp,ptr);
	printf("Text before append %s ",ptr);
	printf("\nEnter your student id ");
	fflush(stdin);
	gets(ptr);
	
	n = strlen(ptr);
	ptr = (char*) realloc(ptr,n*sizeof(char));
	
	strcat(ptr," ");
	strcat(ptr,temp);
	
	printf("\nText after the append %s",ptr);
	free(ptr);
	free(temp);
}