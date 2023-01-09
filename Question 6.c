#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void SentenceCase(char * , int *);

int main(){
	int n=0;
	int *si;
	char *ptr;
	
	printf("\nEnter the size of char you want ");
	scanf("%d",&n);
	
	char alp[n];
	printf("\nEnter the text ");
	fflush(stdin);
	gets(alp);
	
	ptr = &alp[0];
	si = &n;
	
	SentenceCase(ptr,si);
	puts(alp);
}

void SentenceCase(char *poi , int *nu){
	int i = 0;
	
	*poi = toupper((unsigned char)*poi);
	poi++;
	for(i=1;i<*nu;i++){
		if(*poi == '.'){
			poi++;
			*poi = toupper((unsigned char)*poi);
			i++;
		}
		else{
			poi++;
		}
	}
	
}