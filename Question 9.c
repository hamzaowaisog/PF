#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	int i=0;
	char *ptr;
	
	printf("\nEnter the number of char in the name ");
	scanf("%d",&i);

	ptr = (char*)calloc(i,sizeof(char));
	if(ptr == NULL){
		printf("\nError");
		exit(1);
	}
	strcpy(ptr,"Mir Hamza");
	
	printf("%s",ptr);
	
	free(ptr);
	
	
}