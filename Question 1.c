#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void swaped(int* , int* , int*);

int main(){
	int a=0,b=0,c=0;
	int *aptr,*bptr,*cptr;
	printf("\nEnter first value ");
	scanf("%d",&a);
	printf("\nEnter second value ");
	scanf("%d",&b);
	printf("\nEnter third value ");
	scanf("%d",&c);
	
	printf("\nThe values before swap are \n%d\n%d\n%d",a,b,c);
	
	aptr = &a;
	bptr = &b;
	cptr = &c;
	
	swaped(aptr,bptr,cptr);
}

void swaped(int *a, int *b, int *c){
	int temp =0;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
	
	printf("\nThe values after swap are \n%d\n%d\n%d ",*a,*b,*c);
}