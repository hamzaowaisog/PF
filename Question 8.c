#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a=0,b=0,c=0,sum=0;
	
	for(a=-10;a<11;a++){
		for(b=-10;b<11;b++){
			for(c=-10;c<11;c++){
				sum=(3*a)+(7*b)-(5*c);
				
				if(sum==10){
					printf("The roots are a=%d b=%d and c=%d\n",a,b,c);
				}
			}
		}
	}
}