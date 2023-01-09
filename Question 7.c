#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int i=3,j=1;
	
	for(i=3;i<=10;i=i+2){
		for(j=1;j<=10;j++){
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n\n\n");
	}
}