#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>



struct Register{
	char CourseId[20];
	char CourseName[20];	
};

struct Student {
	int studentId;
	char FirstName[100];
	char LastName[100];
	int cellno;
	char email[100];
	
	struct Register rd;
};
int main(){
	int i =0;
	
	struct Student std[5];
	
	for (i=0;i<5;i++){
		printf("\nEnter Student id of student %d ",i+1);
		scanf("%d",&std[i].studentId);
		printf("\nEnter First name of student %d ",i+1);
		fflush(stdin);
		gets(std[i].FirstName);
		printf("\nEnter Last name of student %d ",i+1);
		fflush(stdin);
		gets(std[i].LastName);
		printf("\nEnter the cell no of student %d ",i+1);
		scanf("%d",&std[i].cellno);
		printf("\nEnter the email of student %d ",i+1);
		fflush(stdin);
		gets(std[i].email);
		printf("\nEnter the course id of student %d ",i+1);
		fflush(stdin);
		gets(std[i].rd.CourseId);
		printf("\nEnter the Course name of student %d ",i+1);
		fflush(stdin);
		gets(std[i].rd.CourseName);
		
	}
	
	printf("\n\n\n");
	
	for(i=0;i<5;i++){
		printf("\n\n\n");
		
		printf("RECORD OF STUDENT %d",i+1);
		printf("\nStudent Id : %d \nFirst Name: %s \nLast Name: %s \nCell no: %d \nEmail : %s \nCourse Id: %s \nCourse Name :%s",std[i].studentId,std[i].FirstName,std[i].LastName,std[i].cellno,std[i].email,std[i].rd.CourseId,std[i].rd.CourseName);
	
	}
	
	
}