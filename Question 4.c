#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int wordcount(char *,int *);

int main(){
	
	char wo[20];
	int len=0;
	char *tx ;
	int *le;
	int count =0;
	
	printf("\nEnter the text ");
	fflush(stdin);
	gets(wo);
	
	len = strlen(wo);
	le = &len ;
	
	tx = wo;
	
	count = wordcount( tx , le);
	
	printf("\nThe word count is %d",count);
}
int wordcount(char *text , int *size){
	int count = 1;
	for(int i = 0; i <*size ; i++){
	
	if(*text == ' '){
		count++;
	}
	text++;
}
	
	return(count);
}