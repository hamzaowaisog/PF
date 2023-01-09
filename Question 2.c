#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){
	int N=0,num=0,sum =0,odd=0,even=0,m_3=0,i=0;
	float average=0;
	
	printf("Enter the number for iteration\n");
	scanf("%d",&N);
	
	if(N>10){
		do {
			printf("\nEnter the Number\n");
			scanf("%d",&num);
			if(num>=0){
				sum=sum+num;
				if(num%2==0){
					even++;
				}
				if(num%2==1)
				{
					odd++;
				}
				if(num%3==0){
					m_3++;
				}
			}
			else{
				continue;
			}
		
			i++;
		}while(i<N);
		average = (float)sum/N;
		printf("\nThe average of the num is %.2f",average);
		printf("\nThe number of odd number is %d",odd);
		printf("\nThe number of even number is %d",even);
		printf("\nThe multiple of 3 is %d",m_3);
		
	}
	else {
		exit(0);
	}
}