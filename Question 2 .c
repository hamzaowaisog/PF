#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char name[500];
	char s1[20];
	char s2[20];
	char s3[20];
	char s4[20];
	char s5[20];
	
	int count=0;
	
	
	char alp,temp;
	int i=0,j=0,max=0;
	
	
	
	printf("Enter your name ");
	gets(name);
	
	printf("Enter Subject 1 ");
	gets(s1);
	printf("Enter Subject 2 ");
	gets(s2);
	printf("Enter Subject 3 ");
	gets(s3);
	printf("Enter Subject 4 ");
	gets(s4);
	printf("Enter Subject 5 ");
	gets(s5);
	
	strcat(name,s1);
	strcat(name,s2);
	strcat(name,s3);
	strcat(name,s4);
	strcat(name,s5);
	
	j = strlen(name);
	for(alp='a';alp<='z';alp=alp+1){
	count = 0;	
		for(i=0;i<j;i++){
			if(name[i]==alp){
				count=count+1;
			}
	
}
	if(count>max){
		max = count;
		temp = alp;
	}
}
	printf("The most occuring character is %c ",temp);
}