#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	float arr[20];
	float *a,*b;
	int i=0,j=0;
	float temp=0;;
	for(i=0;i<20;i++){
		printf("\nEnter the %d number ",i+1);
		scanf("%f",&arr[i]);
	}
	a = &arr[0];
	for (i=0;i<20;i++){
		b = &arr[0];
		for(j=0;j<=i;j++){
			if(*a>*b){
				temp = *b;
				*b = *a;
				*a = temp;
			}
			b++;
		}
		a++;
		
	}
	
	printf("\nThe Second Highest number is %.2f",arr[1]);
	
}