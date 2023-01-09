#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int num=0,size=0,i=0,j=0,temp=0,size_1;
	int k;
	printf("Enter the size of array you want..\n");
	scanf("%d",&size);
	int array[size];
	for(i=0;i<size;i++){
		printf("Enter the element of array[%d] ",i+1);
		scanf("%d",&array[i]);
	}
	
	for(j=0;j<size;j++){
		if(array[j]==array[size-1-j]){
			temp=0;
		}
		else{
			temp=1;
			break;
		}
	}
	if(temp==0){
		printf("Array is symmetric");
	}
	else if(temp==1){
		printf("Array is non symmetric");
	}
	
	//PART B
	printf("\n\n\n\n\n\n\n\nPART B");
	srand(time(0));
	double sum=0,average=0,fr;
	
	double arra_1[size];
	int a=0;
	
	for(a=0;a<size;a++){
		fr = (float)((rand()%10)*0.12311);
		arra_1[a]= fr;
	}
	
	
	for(a=0;a<size;a++){
		printf("\nArray elements are = %lf",arra_1[a]);
		sum = sum + arra_1[a];
	}
	
	average = sum/size;
	printf("\nThe sum of num %lf",sum);
	printf("\nThe Average of the num %lf",average);
	
}