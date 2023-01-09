#include<stdio.h>
#include<conio.h>

int main()
{
	int marks=0,pass=0,fail=0,excel=0,A_average=0,i=0;
	
	for(i=0;i<25;i++){
		printf("Enter the marks\n");
		scanf("%d",&marks);
		if(marks<0 || marks>100){
			printf("\nEnter correct marks\n");
			scanf("%d",&marks);
		}
		if(marks<50){
			fail = fail +1;
		}
		else if(marks>=50){
			pass = pass+1;
		}
		if(marks>=86 && marks<=89){
			excel = excel+1;
		}
		if(marks>=75){
			A_average=A_average+1;
		}
		
	}
	printf("\nThe passed students are %d \n",pass);
	printf("\nThe Failed students are %d \n",fail);
	printf("\nThe excel students are %d \n",excel);
	printf("\nThe above average students are %d",A_average);
}