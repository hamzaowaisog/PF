#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	int num=0,n1=0,n2=0,n3=0,n4=0,n5=0,num1=0;
	int sum=0,i=0;
	char b;
	
	printf("Enter the 5-digit number\n");
	scanf("%d",&num);
	while((num<10000 || num>99999)){
		printf("Enter the correct 5-digit num \n");
		scanf("%d",&num);
	}
	num1 = num;
	n1 = num%10;
	num1 = num1/10;
	n2 = num1%10;
	num1 = num1/10;
	n3 = num1%10;
	num1 = num1/10;
	n4 = num1%10;
	num1 = num1/10;
	n5 = num1%10;
	
	sum = n1+n2+n3+n4+n5;
	printf("\nThe sum of digits is %d",sum);
	
	if((sum%2)==0){
		for(i=2;i<num;i++){
			if((num % i)==0){
				b ='p';
			}
			
		}
		if(b=='p'){
			printf("\nIt is not a prime number\n");
		}
		else{
			printf("\nIt is a prime number\n");
		}
		}
		else if ((sum%2)==1){
			if(n1==n5 && n2==n4){
				printf("\nIt is a palindrome number\n");
			}
			else {
				printf("\nIt is not a palindrome number\n");
			}
		}
	}
	
	
	