#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct courses{
	char cour[20];
	float gpa;
};

struct address{
	char st_add[100];
	char city[100];
	char state[100];
	int zip;
};

int main(){
	int num=0,i=0;
	
	printf("Enter the number of student to store there records ");
	scanf("%d",&num);
	
	struct courses c1[num];
	struct address a1[num];
	
	for(i=0;i<num;i++){
		printf("Enter the record of student %d \n",i+1);
		printf("Enter Course for student ");
		fflush(stdin);
		gets(c1[i].cour);
		printf("Enter the gpa of course for student ");
		scanf("%f",&c1[i].gpa);
		
		printf("\nEnter the street address of student  ");
	fflush(stdin);
	gets(a1[i].st_add);
	printf("\nEnter the city of student ");
	fflush(stdin);
	gets(a1[i].city);
	printf("\nEnter the state of student ");
	fflush(stdin);
	gets(a1[i].state);
	printf("\nEnter the zip code of student ");
	scanf("%d",&a1[i].zip);
	}
}