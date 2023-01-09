#include<stdio.h>
#include<conio.h>
int main (){
	int num  = 0 , j = 0 ; 
	
	printf("Enter the Number to find its prime factors \n");
	scanf("%d",&num);
	for (j=2;j<=num;){
		if(num%j==0){
			num=num/j;
			printf("\n%d",j);
	}
	else {
		j++;
	}
}

}
