#include<stdio.h>
#include<conio.h>

int main (){
	float time = 0 ;
	 printf("Ener the time in 24-hours format\n");
	 scanf("%f",&time);
	 
	 if (time>=5 && time<=11){
	 	printf("Good Morning!! ");
	 }
	 else if (time>=12 && time<=18){
	 	printf("Good Evening!!");
	 }
	 else if (time>18 && time<=24){
	 	printf("Good Night!!");
	 }
	 else
	 {
	 	printf("Enter the Correct time or you should be sleeping at this time.");
	 }
	 return 0;
	 getch();
	 
}