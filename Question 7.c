#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct courses {
	char cou[20];
	float gpa;
};

struct address{
	char st_add[100];
	char city[20];
	char state[20];
	int zip;
	};
	
int main(){
	struct courses s1[3],s2[3];
	struct address a1,a2;
	float cgp_1=0,cgp_2=0;
	
	int i=0;
	
	for(i=0;i<3;i++){
		printf("Enter Course %d for student 1 ",i+1);
		fflush(stdin);
		gets(s1[i].cou);
		printf("Enter the gpa of course %d for student 1 ",i+1);
		scanf("%f",&s1[i].gpa);
		cgp_1 = cgp_1 + s1[i].gpa;
	}
	cgp_1 = cgp_1/3;
	printf("%f",cgp_1);
	
	printf("\nEnter the street address of student 1 ");
	fflush(stdin);
	gets(a1.st_add);
	printf("\nEnter the city of student 1 ");
	fflush(stdin);
	gets(a1.city);
	printf("\nEnter the state of student 1");
	fflush(stdin);
	gets(a1.state);
	printf("\nEnter the zip code of student 1");
	scanf("%d",&a1.zip);
	
	for(i=0;i<3;i++){
		printf("Enter Course %d for student 2 ",i+1);
		fflush(stdin);
		gets(s2[i].cou);
		printf("Enter the gpa of course %d for student 2 ",i+1);
		scanf("%f",&s2[i].gpa);
		cgp_2 = cgp_2 + s2[i].gpa;
	}
	cgp_2 = cgp_2/3;
	printf("\nEnter the street address of student 2 ");
	fflush(stdin);
	gets(a2.st_add);
	printf("\nEnter the city of student 2 ");
	fflush(stdin);
	gets(a2.city);
	printf("\nEnter the state of student 2 ");
	fflush(stdin);
	gets(a2.state);
	printf("\nEnter the zip code of student 2 ");
	scanf("%d",&a2.zip);
	
	for(i=0;i<3;i++){
	if(s1[i].gpa>s2[i].gpa){
		printf("The student 1 has highest gpa in %s\n",s1[i].cou);
	}
	else{
		printf("The student 2 has highest gpa in %s\n",s2[i].cou);
	}
}
	if(cgp_1>cgp_2){
		printf("The student 1 has the highest cgpa %.2f\n",cgp_1);
	}
	else{
		printf("The student 2 has the highest cgpa %.2f\n",cgp_2);
	}
}