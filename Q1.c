#include<stdio.h>
#include<conio.h>

int main (){
	int num = 0 , a = 0 , b = 0 , c = 0 ,d = 0 ,e = 0,f = 0;
	
	printf("Enter the num\n");
	scanf("%d", &num);
	if (num>9999){
		
	 if(num<100000){
		
		
	a  = num % 10;
	a =a*2;
	num = num/10;
	num =num - a ;
	b = num % 10;
	b = b*2;
	num = num / 10 ;
	num = num - b ;
	c = num% 10;
	c =c*2;
	num = num/10;
	num = num -c;

	
	
	if (num==7)
	{
		printf("It is divisible by 7");
	}
	else if (num==-7)
	{
		printf("It is divisible by 7");
	}
	else if (num == 0 )
	{
		printf("It is divisible by 7");
	}
	else 
	{
			d = num %10;
			d = d*2;
			num = num / 10;
			num = num -d;
				if (num==7)
	{
		printf("It is divisible by 7");
	}
	else if (num==-7)
	{
		printf("It is divisible by 7");
	}
	else if (num == 0 )
	{
		printf("It is divisible by 7");
	}
	else 
	{
		printf("Number is not divisible by 7");
	}
}
}
	else 
	{
		printf("Enter the correct number");
	}
}
			else
			 {
				printf("Enter the correct num");
			}
	
}

