#include<Stdio.h>
#include<conio.h>

int main(){
	int sum=0,a=0,b=0,c=0;
	a=1;
	b=1;
	//For Loop
	printf("The Fibonacci Series from for loop \n");
	printf("%d %d",a,b);
	for(c=a+b;c<=1000;c=a+b){
		printf(" %d",c);
		if((c%3)==0 || (c%5)==0 || (c%7)==0){
			sum = sum+c;
		}
		a=b;
		b=c;
	}
	printf("\nThe sum of number divisible by 3,5 or 7 is %d",sum);
	
	//Using While loop
	a=1;
	b=1;
	sum=0;
	printf("\nThe Fibonacci series from while loop \n");
	printf("%d %d",a,b);
	c=a+b;
	while(c<=1000){
		printf(" %d",c);
		if(c%3==0 || c%5==0 || c%7==0){
			sum=sum + c;
		}
		a=b;
		b=c;
		c=a+b;
	}
	printf("\nThe sum of number divisible by 3,5 or 7 is %d",sum);
}

//I found the for loop more efficient because at first we know how much the iteration will go on and secondly in for loop the initialization alongwith increment can be done inside the loop whereas in while loop the initialization is to be done before the loop and the increment to be done inside the loop.