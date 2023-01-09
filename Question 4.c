#include<stdio.h>
#include<conio.h>

 void position (int , int);
 
 int main(){
 	
 	int marks = 0, exp = 0;
 	
 	printf("Enter your marks ");
 	scanf("%d",&marks);
 	printf("Enter your experience ");
 	scanf("%d",&exp);
 	
 	position (marks,exp);
 	}
 	
 	void position (int a ,int b){
 		if (a == 50){
 			printf("you are appointed as the post of trainee engineer");
		 }
		 else if ((a >= 60 && a<70) && b >=1){
		 	printf("You are appointed as an assistant developer");
		 }
		 else if (a>=70 && b>=2){
		 	printf("You are appointed as an Associate Developer");
		 }
	 }