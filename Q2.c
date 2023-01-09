#include<stdio.h>
#include<conio.h>

int main (){
	int s1 = 0 , s2 = 0 , s3 = 0;
	printf("Enter the first side of a triangle\n");
	scanf("%d",&s1);
	
	printf("\nEnter the second side of a triangle\n");
	scanf("%d",&s2);
	
	printf("\nEnter the third side of a triangle\n");
	scanf("%d",&s3);
	
	(s1==s2)?(s2==s3)?printf("It is equilateral triangle"):printf("It is Isoceles triangle"):(s2==s3)?printf("It is isoceles trianlge"):printf("It is scalene Triangle");
}